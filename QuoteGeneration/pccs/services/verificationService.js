const logger = require('../utils/Logger.js');
const PccsError = require('../utils/PccsError.js');
const express = require('express');
const {spawn} = require('child_process');
const app = express();
const fs = require('fs');

var exec = require('child_process').exec;

exports.QuoteVerify=async function(){
    logger.info("Quote Verification start");

    var result_dcap;
    var result_epid;
    
    const dcap_att = spawn('/home/mobileosdcaps/SGX/mosl/SGXDataCenterAttestationPrimitives/SampleCode/QuoteVerificationSample/app', []);
    logger.info("Init DCAP Attestation Server");

    const epid_att = spawn('/home/mobileosdcaps/SGX/mosl/SGXDataCenterAttestationPrimitives/QuoteGeneration/pccs/services/run-server', []);
    logger.info("Init EPID Attestation Server");

	dcap_att.stdout.on('data', (data) => {
		result_dcap = data.toString();
	});
	
	epid_att.stdout.on('data', (data) => {
		result_epid = data.toString();
	});

	dcap_att.on('close', (code) => {
		logger.info(result_dcap);

		fs.unlink('quote.dat', function(err){
			if(err) throw err;
			logger.info('quote.dat deleted');
		});
		
		//logger.info('Kill EPID ATT SERVER');
		//epid_att.kill('SIGINT');

		logger.info('Waiting for another attestation request');
	});

	epid_att.on('close', (code) => {
		logger.info(result_epid);

		//dcap_att.kill('SIGINT');
		logger.info('Waiting for another attestation request');
	});

	return;
}

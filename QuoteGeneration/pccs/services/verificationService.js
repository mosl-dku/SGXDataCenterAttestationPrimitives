const logger = require('../utils/Logger.js');
const PccsError = require('../utils/PccsError.js');
const express = require('express');
const {spawn} = require('child_process');
const app = express();
const fs = require('fs');

var exec = require('child_process').exec;

exports.QuoteVerify=async function(){
    logger.info("Quote Verification start");

    var result;
    
    const dcap_att = spawn('/home/mobileosdcaps/SGX/mosl/SGXDataCenterAttestationPrimitives/SampleCode/QuoteVerificationSample/app', []);
    logger.info("Init DCAP Attestation Server");

	dcap_att.stdout.on('data', (data) => {
		result = data.toString();
	});
	
	dcap_att.on('close', (code) => {
		logger.info(result);

		fs.unlink('quote.dat', function(err){
			if(err) throw err;
			logger.info('quote.dat deleted');
		});

		logger.info('Waiting for another attestation request');
	});

	return;
}

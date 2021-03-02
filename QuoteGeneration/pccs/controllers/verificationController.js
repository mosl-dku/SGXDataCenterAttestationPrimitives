// DCAP Quote Verification Service Demo

const { verificationService }= require('../services');
const PccsError = require('../utils/PccsError.js');
const PCCS_STATUS = require('../constants/pccs_status_code.js');
const Constants = require('../constants/');
const logger = require('../utils/Logger.js');

exports.Verification = async function(req,res,next){
	try {
	    logger.info('DCAP Quote Verification Service Start');
	    
	    await verificationService.QuoteVerify();

	    res.send(PCCS_STATUS.PCCS_STATUS_SUCCESS[1]);
	}
	catch(err){
	    next(err);
	}
};

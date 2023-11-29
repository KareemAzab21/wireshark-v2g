/**********************************************************************************************
 *
 * Module: iso2EXIDatatypes
 *
 * File Name: iso2EXIDatatypes.c
 *
 * Description: Source file of iso2 EXI Datatypes module
 *
 * Author: Omar Reda - Aly Maamoun
 **********************************************************************************************/


#include <stdint.h>

#include "iso2EXIDatatypes.h"
#include "EXITypes.h"


#ifndef EXI_iso2_DATATYPES_C
#define EXI_iso2_DATATYPES_C

#if DEPLOY_ISO2_CODEC == SUPPORT_YES


void V2gFac_init_iso2EXIDocument(iso2EXIDocument* exiDoc) {
	exiDoc->V2G_Message_isUsed = 0u;
	exiDoc->ServiceDiscoveryReq_isUsed = 0u;
	exiDoc->ServiceDiscoveryRes_isUsed = 0u;
	exiDoc->FinePositioningReq_isUsed = 0u;
	exiDoc->FinePositioningRes_isUsed = 0u;
	exiDoc->DisconnectChargingDeviceReq_isUsed = 0u;
	exiDoc->DisconnectChargingDeviceRes_isUsed = 0u;
	exiDoc->PowerDemandReq_isUsed = 0u;
	exiDoc->MeteringReceiptReq_isUsed = 0u;
	exiDoc->PaymentDetailsReq_isUsed = 0u;
	exiDoc->PowerDemandRes_isUsed = 0u;
	exiDoc->MeteringReceiptRes_isUsed = 0u;
	exiDoc->PaymentDetailsRes_isUsed = 0u;
	exiDoc->SessionSetupReq_isUsed = 0u;
	exiDoc->SessionSetupRes_isUsed = 0u;
	exiDoc->CableCheckReq_isUsed = 0u;
	exiDoc->CableCheckRes_isUsed = 0u;
	exiDoc->CertificateInstallationReq_isUsed = 0u;
	exiDoc->CertificateInstallationRes_isUsed = 0u;
	exiDoc->SystemStatusReq_isUsed = 0u;
	exiDoc->SystemStatusRes_isUsed = 0u;
	exiDoc->PairingReq_isUsed = 0u;
	exiDoc->WeldingDetectionReq_isUsed = 0u;
	exiDoc->ConnectChargingDeviceReq_isUsed = 0u;
	exiDoc->PairingRes_isUsed = 0u;
	exiDoc->WeldingDetectionRes_isUsed = 0u;
	exiDoc->ConnectChargingDeviceRes_isUsed = 0u;
	exiDoc->CertificateUpdateReq_isUsed = 0u;
	exiDoc->CertificateUpdateRes_isUsed = 0u;
	exiDoc->PaymentServiceSelectionReq_isUsed = 0u;
	exiDoc->PowerDeliveryReq_isUsed = 0u;
	exiDoc->PaymentServiceSelectionRes_isUsed = 0u;
	exiDoc->PowerDeliveryRes_isUsed = 0u;
	exiDoc->ChargingStatusReq_isUsed = 0u;
	exiDoc->ChargingStatusRes_isUsed = 0u;
	exiDoc->BodyElement_isUsed = 0u;
	exiDoc->AC_BidirectionalControlReq_isUsed = 0u;
	exiDoc->AC_BidirectionalControlRes_isUsed = 0u;
	exiDoc->VehicleCheckInReq_isUsed = 0u;
	exiDoc->CurrentDemandReq_isUsed = 0u;
	exiDoc->VehicleCheckInRes_isUsed = 0u;
	exiDoc->PreChargeReq_isUsed = 0u;
	exiDoc->CurrentDemandRes_isUsed = 0u;
	exiDoc->PreChargeRes_isUsed = 0u;
	exiDoc->AlignmentCheckReq_isUsed = 0u;
	exiDoc->V2GRequest_isUsed = 0u;
	exiDoc->SessionStopReq_isUsed = 0u;
	exiDoc->AuthorizationReq_isUsed = 0u;
	exiDoc->AlignmentCheckRes_isUsed = 0u;
	exiDoc->SessionStopRes_isUsed = 0u;
	exiDoc->AuthorizationRes_isUsed = 0u;
	exiDoc->VehicleCheckOutReq_isUsed = 0u;
	exiDoc->ChargeParameterDiscoveryReq_isUsed = 0u;
	exiDoc->VehicleCheckOutRes_isUsed = 0u;
	exiDoc->ChargeParameterDiscoveryRes_isUsed = 0u;
	exiDoc->V2GResponse_isUsed = 0u;
	exiDoc->FinePositioningSetupReq_isUsed = 0u;
	exiDoc->FinePositioningSetupRes_isUsed = 0u;
	exiDoc->ServiceDetailReq_isUsed = 0u;
	exiDoc->DC_BidirectionalControlReq_isUsed = 0u;
	exiDoc->ServiceDetailRes_isUsed = 0u;
	exiDoc->DC_BidirectionalControlRes_isUsed = 0u;
	exiDoc->LFA_EVFinePositioningSetupParameters_isUsed = 0u;
	exiDoc->MV_EVSEFinePositioningParameters_isUsed = 0u;
	exiDoc->RelativeTimeInterval_isUsed = 0u;
	exiDoc->SalesTariffEntry_isUsed = 0u;
	exiDoc->LFA_EVSEFinePositioningSetupParameters_isUsed = 0u;
	exiDoc->AC_EVChargeParameter_isUsed = 0u;
	exiDoc->MV_EVSEFinePositioningSetupParameters_isUsed = 0u;
	exiDoc->EVEnergyTransferParameter_isUsed = 0u;
	exiDoc->DC_EVSEBidirectionalParameter_isUsed = 0u;
	exiDoc->SAScheduleList_isUsed = 0u;
	exiDoc->EVSEFinePositioningSetupParameters_isUsed = 0u;
	exiDoc->Generic_EVSEFinePositioningParameters_isUsed = 0u;
	exiDoc->DC_EVChargeParameter_isUsed = 0u;
	exiDoc->DC_EVSEChargeParameter_isUsed = 0u;
	exiDoc->LFA_EVFinePositioningParameters_isUsed = 0u;
	exiDoc->EVFinePositioningSetupParameters_isUsed = 0u;
	exiDoc->AC_EVSEBidirectionalParameter_isUsed = 0u;
	exiDoc->EVFinePositioningParameters_isUsed = 0u;
	exiDoc->WPT_EVChargeParameter_isUsed = 0u;
	exiDoc->LFA_EVSEFinePositioningParameters_isUsed = 0u;
	exiDoc->EVSEEnergyTransferParameter_isUsed = 0u;
	exiDoc->AC_EVBidirectionalParameter_isUsed = 0u;
	exiDoc->EVSEFinePositioningParameters_isUsed = 0u;
	exiDoc->WPT_EVSEChargeParameter_isUsed = 0u;
	exiDoc->AC_EVSEChargeParameter_isUsed = 0u;
	exiDoc->PMaxScheduleEntry_isUsed = 0u;
	exiDoc->Generic_EVFinePositioningParameters_isUsed = 0u;
	exiDoc->DC_EVBidirectionalParameter_isUsed = 0u;
	exiDoc->SignatureProperty_isUsed = 0u;
	exiDoc->DSAKeyValue_isUsed = 0u;
	exiDoc->SignatureProperties_isUsed = 0u;
	exiDoc->KeyValue_isUsed = 0u;
	exiDoc->Transforms_isUsed = 0u;
	exiDoc->DigestMethod_isUsed = 0u;
	exiDoc->Signature_isUsed = 0u;
	exiDoc->RetrievalMethod_isUsed = 0u;
	exiDoc->Manifest_isUsed = 0u;
	exiDoc->Reference_isUsed = 0u;
	exiDoc->CanonicalizationMethod_isUsed = 0u;
	exiDoc->RSAKeyValue_isUsed = 0u;
	exiDoc->Transform_isUsed = 0u;
	exiDoc->PGPData_isUsed = 0u;
	exiDoc->MgmtData_isUsed = 0u;
	exiDoc->SignatureMethod_isUsed = 0u;
	exiDoc->KeyInfo_isUsed = 0u;
	exiDoc->SPKIData_isUsed = 0u;
	exiDoc->X509Data_isUsed = 0u;
	exiDoc->SignatureValue_isUsed = 0u;
	exiDoc->KeyName_isUsed = 0u;
	exiDoc->DigestValue_isUsed = 0u;
	exiDoc->SignedInfo_isUsed = 0u;
	exiDoc->Object_isUsed = 0u;
}


#if DEPLOY_ISO2_CODEC_FRAGMENT == SUPPORT_YES
void V2gFac_init_iso2EXIFragment(iso2EXIFragment* exiFrag) {
	exiFrag->EVMaximumVoltage_isUsed = 0u;
	exiFrag->EVMaximumVoltage_isUsed = 0u;
	exiFrag->FrequencyChannel_isUsed = 0u;
	exiFrag->FrequencyChannel_isUsed = 0u;
	exiFrag->EVProcessing_isUsed = 0u;
	exiFrag->EVProcessing_isUsed = 0u;
	exiFrag->EVProcessing_isUsed = 0u;
	exiFrag->BulkChargingComplete_isUsed = 0u;
	exiFrag->ParkingMethod_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->Distance_isUsed = 0u;
	exiFrag->ParameterSet_isUsed = 0u;
	exiFrag->EVMinimumDischargeCurrent_isUsed = 0u;
	exiFrag->SignalSeparationTime_isUsed = 0u;
	exiFrag->SignalSeparationTime_isUsed = 0u;
	exiFrag->EVSEEnergyTransferParameter_isUsed = 0u;
	exiFrag->EVSEMaximumVoltage_isUsed = 0u;
	exiFrag->EVSEMaximumVoltage_isUsed = 0u;
	exiFrag->DC_EVSEBidirectionalParameter_isUsed = 0u;
	exiFrag->ChargingSession_isUsed = 0u;
	exiFrag->SubCertificates_isUsed = 0u;
	exiFrag->RetrievalMethod_isUsed = 0u;
	exiFrag->MagneticVectorSetupList_isUsed = 0u;
	exiFrag->PairingParameters_isUsed = 0u;
	exiFrag->PairingParameters_isUsed = 0u;
	exiFrag->EVSEMinimumPower_isUsed = 0u;
	exiFrag->AC_BidirectionalControlReq_isUsed = 0u;
	exiFrag->Cost_isUsed = 0u;
	exiFrag->AC_BidirectionalControlRes_isUsed = 0u;
	exiFrag->BuyBackTariff_isUsed = 0u;
	exiFrag->XCoordinate_isUsed = 0u;
	exiFrag->EVSECheckOutStatus_isUsed = 0u;
	exiFrag->stringValue_isUsed = 0u;
	exiFrag->RetryCounter_isUsed = 0u;
	exiFrag->EVSEMaximumDischargeCurrent_isUsed = 0u;
	exiFrag->Sensor_isUsed = 0u;
	exiFrag->MeterReadingCharged_isUsed = 0u;
	exiFrag->HMACOutputLength_isUsed = 0u;
	exiFrag->V2GResponse_isUsed = 0u;
	exiFrag->EVMinimumVoltage_isUsed = 0u;
	exiFrag->EVMinimumEnergyRequest_isUsed = 0u;
	exiFrag->EVMinimumEnergyRequest_isUsed = 0u;
	exiFrag->EVMinimumEnergyRequest_isUsed = 0u;
	exiFrag->RelativeTimeInterval_isUsed = 0u;
	exiFrag->RelativeTimeInterval_isUsed = 0u;
	exiFrag->WPT_EVChargeParameter_isUsed = 0u;
	exiFrag->SAScheduleTuple_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->PgenCounter_isUsed = 0u;
	exiFrag->SalesTariffDescription_isUsed = 0u;
	exiFrag->AngleGAtoVA_isUsed = 0u;
	exiFrag->boolValue_isUsed = 0u;
	exiFrag->EVMaximumDischargeCurrent_isUsed = 0u;
	exiFrag->EVMaximumDischargeCurrent_isUsed = 0u;
	exiFrag->NotificationMaxDelay_isUsed = 0u;
	exiFrag->EVSEMaximumDischargePower_isUsed = 0u;
	exiFrag->PGPData_isUsed = 0u;
	exiFrag->EVSEMaximumChargePower_isUsed = 0u;
	exiFrag->SessionID_isUsed = 0u;
	exiFrag->EVSEEnergyToBeDelivered_isUsed = 0u;
	exiFrag->EVMaximumPower_isUsed = 0u;
	exiFrag->EVMaximumCurrent_isUsed = 0u;
	exiFrag->RSAKeyValue_isUsed = 0u;
	exiFrag->EVSENominalVoltage_isUsed = 0u;
	exiFrag->MagneticVector_isUsed = 0u;
	exiFrag->XPath_isUsed = 0u;
	exiFrag->Signature_isUsed = 0u;
	exiFrag->EVElectricalChargingDeviceStatus_isUsed = 0u;
	exiFrag->EVElectricalChargingDeviceStatus_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->FODStatus_isUsed = 0u;
	exiFrag->PowerDeliveryRes_isUsed = 0u;
	exiFrag->SessionStopRes_isUsed = 0u;
	exiFrag->WPT_EVSEChargeParameter_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->EVTargetEnergyRequest_isUsed = 0u;
	exiFrag->EVTargetEnergyRequest_isUsed = 0u;
	exiFrag->EVTargetEnergyRequest_isUsed = 0u;
	exiFrag->FinePositioningSetupReq_isUsed = 0u;
	exiFrag->EVSEPresentCurrent_isUsed = 0u;
	exiFrag->EVSEPresentCurrent_isUsed = 0u;
	exiFrag->FinePositioningSetupRes_isUsed = 0u;
	exiFrag->ProfileEntry_isUsed = 0u;
	exiFrag->MgmtData_isUsed = 0u;
	exiFrag->SAProvisioningCertificateChain_isUsed = 0u;
	exiFrag->SAProvisioningCertificateChain_isUsed = 0u;
	exiFrag->PowerDeliveryReq_isUsed = 0u;
	exiFrag->SessionStopReq_isUsed = 0u;
	exiFrag->ReceiptRequired_isUsed = 0u;
	exiFrag->ReceiptRequired_isUsed = 0u;
	exiFrag->ReceiptRequired_isUsed = 0u;
	exiFrag->ReceiptRequired_isUsed = 0u;
	exiFrag->ReceiptRequired_isUsed = 0u;
	exiFrag->ChargingProfile_isUsed = 0u;
	exiFrag->MaxSupportingPoints_isUsed = 0u;
	exiFrag->start_isUsed = 0u;
	exiFrag->EVMinimumChargePower_isUsed = 0u;
	exiFrag->amount_isUsed = 0u;
	exiFrag->PreChargeReq_isUsed = 0u;
	exiFrag->OEMProvisioningCert_isUsed = 0u;
	exiFrag->PackageIndex_isUsed = 0u;
	exiFrag->PreChargeRes_isUsed = 0u;
	exiFrag->P_isUsed = 0u;
	exiFrag->Q_isUsed = 0u;
	exiFrag->X509SubjectName_isUsed = 0u;
	exiFrag->G_isUsed = 0u;
	exiFrag->J_isUsed = 0u;
	exiFrag->SessionID_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->MV_EVSEFinePositioningSetupParameters_isUsed = 0u;
	exiFrag->EVSEMinimumDischargeCurrent_isUsed = 0u;
	exiFrag->EVMaximumChargeCurrent_isUsed = 0u;
	exiFrag->EVMaximumChargeCurrent_isUsed = 0u;
	exiFrag->AlignmentOffset_isUsed = 0u;
	exiFrag->AlignmentOffset_isUsed = 0u;
	exiFrag->Y_isUsed = 0u;
	exiFrag->RemainingTimeToTargetSOC_isUsed = 0u;
	exiFrag->DigestValue_isUsed = 0u;
	exiFrag->SensorMeasurements_isUsed = 0u;
	exiFrag->SalesTariff_isUsed = 0u;
	exiFrag->EVCCID_isUsed = 0u;
	exiFrag->EVSEMaximumPower_isUsed = 0u;
	exiFrag->TargetOffset_isUsed = 0u;
	exiFrag->PowerDemandParameters_isUsed = 0u;
	exiFrag->PowerDemandParameters_isUsed = 0u;
	exiFrag->PGPKeyID_isUsed = 0u;
	exiFrag->DisconnectChargingDeviceReq_isUsed = 0u;
	exiFrag->DisconnectChargingDeviceRes_isUsed = 0u;
	exiFrag->DSAKeyValue_isUsed = 0u;
	exiFrag->SalesTariffEntry_isUsed = 0u;
	exiFrag->CertificateInstallationRes_isUsed = 0u;
	exiFrag->CanonicalizationMethod_isUsed = 0u;
	exiFrag->Generic_EVFinePositioningParameters_isUsed = 0u;
	exiFrag->EVSEMinimumVoltage_isUsed = 0u;
	exiFrag->SystemStatusRes_isUsed = 0u;
	exiFrag->EVSEOutputPower_isUsed = 0u;
	exiFrag->SignedInfo_isUsed = 0u;
	exiFrag->EVMinimumChargeCurrent_isUsed = 0u;
	exiFrag->EVMinimumChargeCurrent_isUsed = 0u;
	exiFrag->costKind_isUsed = 0u;
	exiFrag->SystemStatusReq_isUsed = 0u;
	exiFrag->CableCheckReq_isUsed = 0u;
	exiFrag->NumEPriceLevels_isUsed = 0u;
	exiFrag->EVSEVoltageLimitAchieved_isUsed = 0u;
	exiFrag->EVSEVoltageLimitAchieved_isUsed = 0u;
	exiFrag->PackageSeparationTime_isUsed = 0u;
	exiFrag->PackageSeparationTime_isUsed = 0u;
	exiFrag->CableCheckRes_isUsed = 0u;
	exiFrag->EVCheckInStatus_isUsed = 0u;
	exiFrag->PMaxDischargeSchedule_isUsed = 0u;
	exiFrag->EVMinimumPower_isUsed = 0u;
	exiFrag->ChargingPerformance_isUsed = 0u;
	exiFrag->AlignmentCheckReq_isUsed = 0u;
	exiFrag->EVMechanicalChargingDeviceStatus_isUsed = 0u;
	exiFrag->EVMechanicalChargingDeviceStatus_isUsed = 0u;
	exiFrag->EVMechanicalChargingDeviceStatus_isUsed = 0u;
	exiFrag->VehicleSpace_isUsed = 0u;
	exiFrag->AlignmentCheckRes_isUsed = 0u;
	exiFrag->EVMinimumDischargePower_isUsed = 0u;
	exiFrag->RemainingTimeToMinimumSOC_isUsed = 0u;
	exiFrag->AuthorizationRes_isUsed = 0u;
	exiFrag->CertificateInstallationReq_isUsed = 0u;
	exiFrag->PaymentDetailsReq_isUsed = 0u;
	exiFrag->PaymentDetailsRes_isUsed = 0u;
	exiFrag->AuthorizationReq_isUsed = 0u;
	exiFrag->EVTargetCurrent_isUsed = 0u;
	exiFrag->EVTargetCurrent_isUsed = 0u;
	exiFrag->EVTargetCurrent_isUsed = 0u;
	exiFrag->SessionSetupReq_isUsed = 0u;
	exiFrag->SessionSetupRes_isUsed = 0u;
	exiFrag->EVSENominalFrequency_isUsed = 0u;
	exiFrag->EVSENominalFrequency_isUsed = 0u;
	exiFrag->Header_isUsed = 0u;
	exiFrag->NumberOfSensors_isUsed = 0u;
	exiFrag->NumberOfSensors_isUsed = 0u;
	exiFrag->EVSETimeStamp_isUsed = 0u;
	exiFrag->EVSETimeStamp_isUsed = 0u;
	exiFrag->MeterStatus_isUsed = 0u;
	exiFrag->EVSEMaximumPower_isUsed = 0u;
	exiFrag->MV_EVSEFinePositioningParameters_isUsed = 0u;
	exiFrag->ChargeProgress_isUsed = 0u;
	exiFrag->KeyName_isUsed = 0u;
	exiFrag->PMaxSchedule_isUsed = 0u;
	exiFrag->duration_isUsed = 0u;
	exiFrag->RemainingTimeToBulkSOC_isUsed = 0u;
	exiFrag->SensorOrientation_isUsed = 0u;
	exiFrag->EVSEMinimumVoltage_isUsed = 0u;
	exiFrag->EVSEMaximumChargeCurrent_isUsed = 0u;
	exiFrag->LFA_EVSEFinePositioningParameters_isUsed = 0u;
	exiFrag->VehicleCheckInRes_isUsed = 0u;
	exiFrag->PMaxScheduleEntry_isUsed = 0u;
	exiFrag->SAScheduleList_isUsed = 0u;
	exiFrag->X509SKI_isUsed = 0u;
	exiFrag->PaymentOptionList_isUsed = 0u;
	exiFrag->ContractSignatureEncryptedPrivateKey_isUsed = 0u;
	exiFrag->ContractSignatureEncryptedPrivateKey_isUsed = 0u;
	exiFrag->VehicleCheckInReq_isUsed = 0u;
	exiFrag->Certificate_isUsed = 0u;
	exiFrag->Certificate_isUsed = 0u;
	exiFrag->CheckOutTime_isUsed = 0u;
	exiFrag->CurrentSOC_isUsed = 0u;
	exiFrag->CurrentSOC_isUsed = 0u;
	exiFrag->ZCoordinate_isUsed = 0u;
	exiFrag->MeasurementData_isUsed = 0u;
	exiFrag->PairingRes_isUsed = 0u;
	exiFrag->EVSEMaximumCurrent_isUsed = 0u;
	exiFrag->LFA_EVFinePositioningParameters_isUsed = 0u;
	exiFrag->AlignmentCheckParameters_isUsed = 0u;
	exiFrag->AlignmentCheckParameters_isUsed = 0u;
	exiFrag->EffectiveRadiatedPower_isUsed = 0u;
	exiFrag->PairingReq_isUsed = 0u;
	exiFrag->EVMinimumChargeCurrent_isUsed = 0u;
	exiFrag->EVMinimumChargeCurrent_isUsed = 0u;
	exiFrag->Value_isUsed = 0u;
	exiFrag->byteValue_isUsed = 0u;
	exiFrag->EVSEMaximumChargeCurrent_isUsed = 0u;
	exiFrag->EVSEMaximumChargeCurrent_isUsed = 0u;
	exiFrag->CurrentDemandReq_isUsed = 0u;
	exiFrag->Generic_EVSEFinePositioningParameters_isUsed = 0u;
	exiFrag->CurrentDemandRes_isUsed = 0u;
	exiFrag->SAScheduleList_isUsed = 0u;
	exiFrag->AC_EVBidirectionalParameter_isUsed = 0u;
	exiFrag->Modulus_isUsed = 0u;
	exiFrag->SelectedEnergyTransferService_isUsed = 0u;
	exiFrag->startValue_isUsed = 0u;
	exiFrag->SelectedVASList_isUsed = 0u;
	exiFrag->EVSEMaximumDischargePower_isUsed = 0u;
	exiFrag->ChargeParameterDiscoveryReq_isUsed = 0u;
	exiFrag->ChargeParameterDiscoveryRes_isUsed = 0u;
	exiFrag->EVMaximumDischargeCurrent_isUsed = 0u;
	exiFrag->EVMaximumDischargeCurrent_isUsed = 0u;
	exiFrag->SigMeterReading_isUsed = 0u;
	exiFrag->TargetSOC_isUsed = 0u;
	exiFrag->TargetSOC_isUsed = 0u;
	exiFrag->EVMaximumPower_isUsed = 0u;
	exiFrag->EVSEMaximumChargePower_isUsed = 0u;
	exiFrag->EVSEStatus_isUsed = 0u;
	exiFrag->EVSEMinimumChargeCurrent_isUsed = 0u;
	exiFrag->EVSEElectricalChargingDeviceStatus_isUsed = 0u;
	exiFrag->EVSEElectricalChargingDeviceStatus_isUsed = 0u;
	exiFrag->X509SerialNumber_isUsed = 0u;
	exiFrag->PaymentOption_isUsed = 0u;
	exiFrag->Transforms_isUsed = 0u;
	exiFrag->EVSEPeakCurrentRipple_isUsed = 0u;
	exiFrag->ConsumptionCost_isUsed = 0u;
	exiFrag->EVTargetEnergyRequest_isUsed = 0u;
	exiFrag->EVSEFinePositioningSetupParameters_isUsed = 0u;
	exiFrag->EPriceLevel_isUsed = 0u;
	exiFrag->Exponent_isUsed = 0u;
	exiFrag->X509IssuerSerial_isUsed = 0u;
	exiFrag->SPKIData_isUsed = 0u;
	exiFrag->MagneticVectorList_isUsed = 0u;
	exiFrag->EVSEFinePositioningParameters_isUsed = 0u;
	exiFrag->EVTargetPower_isUsed = 0u;
	exiFrag->SensorPackageList_isUsed = 0u;
	exiFrag->SensorPackageList_isUsed = 0u;
	exiFrag->DepartureTime_isUsed = 0u;
	exiFrag->InletHot_isUsed = 0u;
	exiFrag->EVPresentActivePower_isUsed = 0u;
	exiFrag->X509Data_isUsed = 0u;
	exiFrag->YCoordinate_isUsed = 0u;
	exiFrag->KeyValue_isUsed = 0u;
	exiFrag->DisplayParameters_isUsed = 0u;
	exiFrag->EVSEPowerLimitAchieved_isUsed = 0u;
	exiFrag->EVSEPowerLimitAchieved_isUsed = 0u;
	exiFrag->Body_isUsed = 0u;
	exiFrag->DC_EVChargeParameter_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->Service_isUsed = 0u;
	exiFrag->EVMinimumDischargeCurrent_isUsed = 0u;
	exiFrag->EVMinimumDischargeCurrent_isUsed = 0u;
	exiFrag->SignatureProperty_isUsed = 0u;
	exiFrag->PGPKeyPacket_isUsed = 0u;
	exiFrag->PGPKeyPacket_isUsed = 0u;
	exiFrag->Seed_isUsed = 0u;
	exiFrag->LFA_EVFinePositioningSetupParameters_isUsed = 0u;
	exiFrag->MinimumPMaxRequest_isUsed = 0u;
	exiFrag->FinePositioningReq_isUsed = 0u;
	exiFrag->EnergyTransferServiceList_isUsed = 0u;
	exiFrag->FinePositioningRes_isUsed = 0u;
	exiFrag->AC_EVSEBidirectionalParameter_isUsed = 0u;
	exiFrag->FreeService_isUsed = 0u;
	exiFrag->EVMinimumVoltage_isUsed = 0u;
	exiFrag->AC_EVSEChargeParameter_isUsed = 0u;
	exiFrag->EVMaximumVoltage_isUsed = 0u;
	exiFrag->EVMaximumVoltage_isUsed = 0u;
	exiFrag->SensorID_isUsed = 0u;
	exiFrag->SensorID_isUsed = 0u;
	exiFrag->EVMaximumChargeCurrent_isUsed = 0u;
	exiFrag->EVMaximumChargeCurrent_isUsed = 0u;
	exiFrag->EVMaximumChargeCurrent_isUsed = 0u;
	exiFrag->EVSECurrentRegulationTolerance_isUsed = 0u;
	exiFrag->EVSEMechanicalChargingDeviceStatus_isUsed = 0u;
	exiFrag->EVSEMechanicalChargingDeviceStatus_isUsed = 0u;
	exiFrag->EVSEMechanicalChargingDeviceStatus_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->EVEnergyTransferParameter_isUsed = 0u;
	exiFrag->SignalPulseDuration_isUsed = 0u;
	exiFrag->SignalPulseDuration_isUsed = 0u;
	exiFrag->shortValue_isUsed = 0u;
	exiFrag->EVSEMaximumDischargeCurrent_isUsed = 0u;
	exiFrag->EVSEMaximumDischargeCurrent_isUsed = 0u;
	exiFrag->Manifest_isUsed = 0u;
	exiFrag->DC_EVSEChargeParameter_isUsed = 0u;
	exiFrag->MeteringReceiptReq_isUsed = 0u;
	exiFrag->MeterID_isUsed = 0u;
	exiFrag->MeteringReceiptRes_isUsed = 0u;
	exiFrag->ServiceDiscoveryReq_isUsed = 0u;
	exiFrag->SalesTariffID_isUsed = 0u;
	exiFrag->ServiceDiscoveryRes_isUsed = 0u;
	exiFrag->X509CRL_isUsed = 0u;
	exiFrag->MagneticVectorSetup_isUsed = 0u;
	exiFrag->DigestMethod_isUsed = 0u;
	exiFrag->SPKISexp_isUsed = 0u;
	exiFrag->MeterReadingDischarged_isUsed = 0u;
	exiFrag->MeasurementDataList_isUsed = 0u;
	exiFrag->SignatureProperties_isUsed = 0u;
	exiFrag->SensorPosition_isUsed = 0u;
	exiFrag->SensorPosition_isUsed = 0u;
	exiFrag->LFA_EVSEFinePositioningSetupParameters_isUsed = 0u;
	exiFrag->eMAID_isUsed = 0u;
	exiFrag->eMAID_isUsed = 0u;
	exiFrag->eMAID_isUsed = 0u;
	exiFrag->eMAID_isUsed = 0u;
	exiFrag->SensorPackage_isUsed = 0u;
	exiFrag->EVCheckOutStatus_isUsed = 0u;
	exiFrag->EVMinimumEnergyRequest_isUsed = 0u;
	exiFrag->X509Certificate_isUsed = 0u;
	exiFrag->RootCertificateID_isUsed = 0u;
	exiFrag->DC_BidirectionalControlReq_isUsed = 0u;
	exiFrag->EVSEPresentVoltage_isUsed = 0u;
	exiFrag->EVSEPresentVoltage_isUsed = 0u;
	exiFrag->DC_BidirectionalControlRes_isUsed = 0u;
	exiFrag->EVSEPresentVoltage_isUsed = 0u;
	exiFrag->VASList_isUsed = 0u;
	exiFrag->EVSEPresentVoltage_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->EVSETargetReactivePower_isUsed = 0u;
	exiFrag->ChargingStatusReq_isUsed = 0u;
	exiFrag->GenericParameters_isUsed = 0u;
	exiFrag->GenericParameters_isUsed = 0u;
	exiFrag->ChargingStatusRes_isUsed = 0u;
	exiFrag->EVMaximumChargePower_isUsed = 0u;
	exiFrag->EVMaximumChargePower_isUsed = 0u;
	exiFrag->BulkSOC_isUsed = 0u;
	exiFrag->BulkSOC_isUsed = 0u;
	exiFrag->NumberOfSignalPackages_isUsed = 0u;
	exiFrag->NumberOfSignalPackages_isUsed = 0u;
	exiFrag->ParameterSetID_isUsed = 0u;
	exiFrag->PMax_isUsed = 0u;
	exiFrag->ParameterSetID_isUsed = 0u;
	exiFrag->EVMaximumEnergyRequest_isUsed = 0u;
	exiFrag->EVMaximumEnergyRequest_isUsed = 0u;
	exiFrag->EVMaximumEnergyRequest_isUsed = 0u;
	exiFrag->EVOperation_isUsed = 0u;
	exiFrag->EVOperation_isUsed = 0u;
	exiFrag->CertificateUpdateRes_isUsed = 0u;
	exiFrag->ChargingComplete_isUsed = 0u;
	exiFrag->ListOfRootCertificateIDs_isUsed = 0u;
	exiFrag->ListOfRootCertificateIDs_isUsed = 0u;
	exiFrag->RotationVAtoGA_isUsed = 0u;
	exiFrag->EVTargetVoltage_isUsed = 0u;
	exiFrag->EVTargetVoltage_isUsed = 0u;
	exiFrag->EVTargetVoltage_isUsed = 0u;
	exiFrag->CertificateUpdateReq_isUsed = 0u;
	exiFrag->ConnectChargingDeviceRes_isUsed = 0u;
	exiFrag->DHpublickey_isUsed = 0u;
	exiFrag->DHpublickey_isUsed = 0u;
	exiFrag->ServiceParameterList_isUsed = 0u;
	exiFrag->SignatureValue_isUsed = 0u;
	exiFrag->physicalValue_isUsed = 0u;
	exiFrag->Exponent_isUsed = 0u;
	exiFrag->OperationMode_isUsed = 0u;
	exiFrag->OperationMode_isUsed = 0u;
	exiFrag->EVSECurrentLimitAchieved_isUsed = 0u;
	exiFrag->EVSECurrentLimitAchieved_isUsed = 0u;
	exiFrag->ServiceDetailReq_isUsed = 0u;
	exiFrag->ServiceDetailRes_isUsed = 0u;
	exiFrag->EVSEMaximumVoltage_isUsed = 0u;
	exiFrag->intValue_isUsed = 0u;
	exiFrag->EVMaximumDischargePower_isUsed = 0u;
	exiFrag->EVMaximumDischargePower_isUsed = 0u;
	exiFrag->MinimumSOC_isUsed = 0u;
	exiFrag->MinimumSOC_isUsed = 0u;
	exiFrag->SelectedPaymentOption_isUsed = 0u;
	exiFrag->V2G_Message_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->TMeter_isUsed = 0u;
	exiFrag->SensorOrder_isUsed = 0u;
	exiFrag->SensorOrder_isUsed = 0u;
	exiFrag->SupportedServiceIDs_isUsed = 0u;
	exiFrag->GenChallenge_isUsed = 0u;
	exiFrag->GenChallenge_isUsed = 0u;
	exiFrag->EVFinePositioningParameters_isUsed = 0u;
	exiFrag->SensorList_isUsed = 0u;
	exiFrag->SensorList_isUsed = 0u;
	exiFrag->KeyInfo_isUsed = 0u;
	exiFrag->ConnectChargingDeviceReq_isUsed = 0u;
	exiFrag->AC_EVChargeParameter_isUsed = 0u;
	exiFrag->Parameter_isUsed = 0u;
	exiFrag->WeldingDetectionRes_isUsed = 0u;
	exiFrag->GAID_isUsed = 0u;
	exiFrag->GAID_isUsed = 0u;
	exiFrag->SignalFrequency_isUsed = 0u;
	exiFrag->EVSETargetPower_isUsed = 0u;
	exiFrag->DC_EVBidirectionalParameter_isUsed = 0u;
	exiFrag->EVSETargetPower_isUsed = 0u;
	exiFrag->SignatureMethod_isUsed = 0u;
	exiFrag->WeldingDetectionReq_isUsed = 0u;
	exiFrag->SelectedService_isUsed = 0u;
	exiFrag->EVInputPower_isUsed = 0u;
	exiFrag->VehicleCheckOutReq_isUsed = 0u;
	exiFrag->EVMaximumDischargePower_isUsed = 0u;
	exiFrag->EVMaximumDischargePower_isUsed = 0u;
	exiFrag->PowerDemandReq_isUsed = 0u;
	exiFrag->VehicleCheckOutRes_isUsed = 0u;
	exiFrag->CurrentRange_isUsed = 0u;
	exiFrag->EVPresentReactivePower_isUsed = 0u;
	exiFrag->X509IssuerName_isUsed = 0u;
	exiFrag->V2GRequest_isUsed = 0u;
	exiFrag->Reference_isUsed = 0u;
	exiFrag->BodyElement_isUsed = 0u;
	exiFrag->MinimumPMaxScheduleEntry_isUsed = 0u;
	exiFrag->EVFinePositioningSetupParameters_isUsed = 0u;
	exiFrag->EVSENotification_isUsed = 0u;
	exiFrag->PaymentServiceSelectionReq_isUsed = 0u;
	exiFrag->EVMaximumChargePower_isUsed = 0u;
	exiFrag->EVMaximumChargePower_isUsed = 0u;
	exiFrag->EVMaximumChargePower_isUsed = 0u;
	exiFrag->PaymentServiceSelectionRes_isUsed = 0u;
	exiFrag->Transform_isUsed = 0u;
	exiFrag->EVMaximumEnergyRequest_isUsed = 0u;
	exiFrag->Object_isUsed = 0u;
	exiFrag->TargetOffsetY_isUsed = 0u;
	exiFrag->PowerDemandRes_isUsed = 0u;
	exiFrag->TargetOffsetX_isUsed = 0u;
}
#endif /* DEPLOY_ISO2_CODEC_FRAGMENT */

void V2gFac_init_iso2RetrievalMethodType(iso2RetrievalMethodType* iso2RetrievalMethodType) {
	iso2RetrievalMethodType->URI_isUsed = 0u;
	iso2RetrievalMethodType->Type_isUsed = 0u;
	iso2RetrievalMethodType->Transforms_isUsed = 0u;
}

void V2gFac_init_iso2AuthorizationResType(iso2AuthorizationResType* iso2AuthorizationResType) {
	iso2AuthorizationResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2MV_EVSEFinePositioningSetupParametersType( iso2MV_EVSEFinePositioningSetupParametersType* iso2MV_EVSEFinePositioningSetupParametersType) {
	iso2MV_EVSEFinePositioningSetupParametersType->FrequencyChannel_isUsed = 0u;
	iso2MV_EVSEFinePositioningSetupParametersType->MagneticVectorSetupList_isUsed = 0u;
}

void V2gFac_init_iso2X509DataType(iso2X509DataType* iso2X509DataType) {
	iso2X509DataType->X509IssuerSerial.arrayLen = 0u;
	iso2X509DataType->X509SKI.arrayLen = 0u;
	iso2X509DataType->X509SubjectName.arrayLen = 0u;
	iso2X509DataType->X509Certificate.arrayLen = 0u;
	iso2X509DataType->X509CRL.arrayLen = 0u;
	iso2X509DataType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2RSAKeyValueType(iso2RSAKeyValueType* iso2RSAKeyValueType) {
	(void)iso2RSAKeyValueType; /* avoid unused warning */
}

void V2gFac_init_iso2DC_BidirectionalControlResType( iso2DC_BidirectionalControlResType* iso2DC_BidirectionalControlResType) {
	iso2DC_BidirectionalControlResType->EVSEStatus_isUsed = 0u;
	iso2DC_BidirectionalControlResType->EVSEMaximumChargePower_isUsed = 0u;
	iso2DC_BidirectionalControlResType->EVSEMaximumDischargePower_isUsed = 0u;
	iso2DC_BidirectionalControlResType->EVSEMaximumChargeCurrent_isUsed = 0u;
	iso2DC_BidirectionalControlResType->EVSEMaximumDischargeCurrent_isUsed = 0u;
	iso2DC_BidirectionalControlResType->EVSEMaximumVoltage_isUsed = 0u;
	iso2DC_BidirectionalControlResType->EVSEMinimumVoltage_isUsed = 0u;
	iso2DC_BidirectionalControlResType->SAScheduleTupleID_isUsed = 0u;
	iso2DC_BidirectionalControlResType->MeterInfo_isUsed = 0u;
	iso2DC_BidirectionalControlResType->ReceiptRequired_isUsed = 0u;
}

void V2gFac_init_iso2CostType(iso2CostType* iso2CostType) {
	(void)iso2CostType; /* avoid unused warning */
}

void V2gFac_init_iso2ChargingStatusResType(iso2ChargingStatusResType* iso2ChargingStatusResType) {
	iso2ChargingStatusResType->EVSEStatus_isUsed = 0u;
	iso2ChargingStatusResType->SAScheduleTupleID_isUsed = 0u;
	iso2ChargingStatusResType->MeterInfo_isUsed = 0u;
	iso2ChargingStatusResType->ReceiptRequired_isUsed = 0u;
	iso2ChargingStatusResType->EVSETargetPower_isUsed = 0u;
}

void V2gFac_init_iso2MeterInfoType(iso2MeterInfoType* iso2MeterInfoType) {
	iso2MeterInfoType->MeterReadingCharged_isUsed = 0u;
	iso2MeterInfoType->MeterReadingDischarged_isUsed = 0u;
	iso2MeterInfoType->SigMeterReading_isUsed = 0u;
	iso2MeterInfoType->MeterStatus_isUsed = 0u;
	iso2MeterInfoType->TMeter_isUsed = 0u;
}

void V2gFac_init_iso2AC_EVChargeParameterType(iso2AC_EVChargeParameterType* iso2AC_EVChargeParameterType) {
	iso2AC_EVChargeParameterType->EVTargetEnergyRequest_isUsed = 0u;
	iso2AC_EVChargeParameterType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2AC_EVChargeParameterType->EVMinimumEnergyRequest_isUsed = 0u;
}

void V2gFac_init_iso2AC_EVSEBidirectionalParameterType(iso2AC_EVSEBidirectionalParameterType* iso2AC_EVSEBidirectionalParameterType) {
	(void)iso2AC_EVSEBidirectionalParameterType; /* avoid unused warning */
}

void V2gFac_init_iso2VehicleCheckOutResType(iso2VehicleCheckOutResType* iso2VehicleCheckOutResType) {
	iso2VehicleCheckOutResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2MagneticVectorListType(iso2MagneticVectorListType* iso2MagneticVectorListType) {
	iso2MagneticVectorListType->MagneticVector.arrayLen = 0u;
}

void V2gFac_init_iso2CableCheckResType(iso2CableCheckResType* iso2CableCheckResType) {
	iso2CableCheckResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2ServiceDiscoveryReqType(iso2ServiceDiscoveryReqType* iso2ServiceDiscoveryReqType) {
	iso2ServiceDiscoveryReqType->SupportedServiceIDs_isUsed = 0u;
}

void V2gFac_init_iso2ServiceType(iso2ServiceType* iso2ServiceType) {
	(void)iso2ServiceType; /* avoid unused warning */
}

void V2gFac_init_iso2ServiceParameterListType( iso2ServiceParameterListType* iso2ServiceParameterListType) {
	iso2ServiceParameterListType->ParameterSet.arrayLen = 0u;
}

void V2gFac_init_iso2PMaxScheduleType( iso2PMaxScheduleType* iso2PMaxScheduleType) {
	iso2PMaxScheduleType->PMaxScheduleEntry.arrayLen = 0u;
}

void V2gFac_init_iso2SignaturePropertiesType( iso2SignaturePropertiesType* iso2SignaturePropertiesType) {
	iso2SignaturePropertiesType->Id_isUsed = 0u;
	iso2SignaturePropertiesType->SignatureProperty.arrayLen = 0u;
}

void V2gFac_init_iso2PMaxScheduleEntryType( iso2PMaxScheduleEntryType* iso2PMaxScheduleEntryType) {
	iso2PMaxScheduleEntryType->PMax.arrayLen = 0u;
}

void V2gFac_init_iso2SignatureType( iso2SignatureType* iso2SignatureType) {
	iso2SignatureType->Id_isUsed = 0u;
	iso2SignatureType->KeyInfo_isUsed = 0u;
	iso2SignatureType->Object.arrayLen = 0u;
}

void V2gFac_init_iso2VehicleCheckInReqType( iso2VehicleCheckInReqType* iso2VehicleCheckInReqType) {
	iso2VehicleCheckInReqType->ParkingMethod_isUsed = 0u;
}

void V2gFac_init_iso2ConnectChargingDeviceResType( iso2ConnectChargingDeviceResType* iso2ConnectChargingDeviceResType) {
	iso2ConnectChargingDeviceResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2WeldingDetectionResType( iso2WeldingDetectionResType* iso2WeldingDetectionResType) {
	iso2WeldingDetectionResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2SessionStopResType( iso2SessionStopResType* iso2SessionStopResType) {
	iso2SessionStopResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2VehicleCheckInResType( iso2VehicleCheckInResType* iso2VehicleCheckInResType) {
	iso2VehicleCheckInResType->EVSEStatus_isUsed = 0u;
	iso2VehicleCheckInResType->TargetOffset_isUsed = 0u;
}

void V2gFac_init_iso2ServiceListType( iso2ServiceListType* iso2ServiceListType) {
	iso2ServiceListType->Service.arrayLen = 0u;
}

void V2gFac_init_iso2CertificateUpdateResType( iso2CertificateUpdateResType* iso2CertificateUpdateResType) {
	iso2CertificateUpdateResType->EVSEStatus_isUsed = 0u;
	iso2CertificateUpdateResType->RetryCounter_isUsed = 0u;
}

void V2gFac_init_iso2FinePositioningSetupResType( iso2FinePositioningSetupResType* iso2FinePositioningSetupResType) {
	iso2FinePositioningSetupResType->EVSEStatus_isUsed = 0u;
	iso2FinePositioningSetupResType->EVSEFinePositioningSetupParameters_isUsed = 0u;
	iso2FinePositioningSetupResType->LFA_EVSEFinePositioningSetupParameters_isUsed = 0u;
	iso2FinePositioningSetupResType->MV_EVSEFinePositioningSetupParameters_isUsed = 0u;
}

void V2gFac_init_iso2AC_EVBidirectionalParameterType( iso2AC_EVBidirectionalParameterType* iso2AC_EVBidirectionalParameterType) {
	iso2AC_EVBidirectionalParameterType->EVTargetEnergyRequest_isUsed = 0u;
	iso2AC_EVBidirectionalParameterType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2AC_EVBidirectionalParameterType->EVMinimumEnergyRequest_isUsed = 0u;
}

void V2gFac_init_iso2DC_BidirectionalControlReqType( iso2DC_BidirectionalControlReqType* iso2DC_BidirectionalControlReqType) {
	iso2DC_BidirectionalControlReqType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2DC_BidirectionalControlReqType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2DC_BidirectionalControlReqType->DisplayParameters_isUsed = 0u;
	iso2DC_BidirectionalControlReqType->EVMaximumDischargeCurrent_isUsed = 0u;
	iso2DC_BidirectionalControlReqType->EVMaximumChargePower_isUsed = 0u;
	iso2DC_BidirectionalControlReqType->EVMaximumDischargePower_isUsed = 0u;
}

void V2gFac_init_iso2CertificateUpdateReqType( iso2CertificateUpdateReqType* iso2CertificateUpdateReqType) {
	(void)iso2CertificateUpdateReqType; /* avoid unused warning */
}

void V2gFac_init_iso2ConsumptionCostType( iso2ConsumptionCostType* iso2ConsumptionCostType) {
	iso2ConsumptionCostType->Cost.arrayLen = 0u;
}

void V2gFac_init_iso2SAScheduleListType( iso2SAScheduleListType* iso2SAScheduleListType) {
	iso2SAScheduleListType->SAScheduleTuple.arrayLen = 0u;
}

void V2gFac_init_iso2MagneticVectorSetupType( iso2MagneticVectorSetupType* iso2MagneticVectorSetupType) {
	(void)iso2MagneticVectorSetupType; /* avoid unused warning */
}

void V2gFac_init_iso2LFA_EVSEFinePositioningSetupParametersType( iso2LFA_EVSEFinePositioningSetupParametersType* iso2LFA_EVSEFinePositioningSetupParametersType) {
	(void)iso2LFA_EVSEFinePositioningSetupParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2PaymentOptionListType( iso2PaymentOptionListType* iso2PaymentOptionListType) {
	iso2PaymentOptionListType->PaymentOption.arrayLen = 0u;
}

void V2gFac_init_iso2LFA_EVSEFinePositioningParametersType( iso2LFA_EVSEFinePositioningParametersType* iso2LFA_EVSEFinePositioningParametersType) {
	(void)iso2LFA_EVSEFinePositioningParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2RelativeTimeIntervalType( iso2RelativeTimeIntervalType* iso2RelativeTimeIntervalType) {
	iso2RelativeTimeIntervalType->duration_isUsed = 0u;
}

void V2gFac_init_iso2EVFinePositioningParametersType( iso2EVFinePositioningParametersType* iso2EVFinePositioningParametersType) {
	(void)iso2EVFinePositioningParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2AlignmentCheckReqType( iso2AlignmentCheckReqType* iso2AlignmentCheckReqType) {
	iso2AlignmentCheckReqType->AlignmentCheckParameters_isUsed = 0u;
}

void V2gFac_init_iso2CertificateInstallationReqType( iso2CertificateInstallationReqType* iso2CertificateInstallationReqType) {
	(void)iso2CertificateInstallationReqType; /* avoid unused warning */
}

void V2gFac_init_iso2TransformsType( iso2TransformsType* iso2TransformsType) {
	iso2TransformsType->Transform.arrayLen = 0u;
}

void V2gFac_init_iso2ObjectType( iso2ObjectType* iso2ObjectType) {
	iso2ObjectType->Id_isUsed = 0u;
	iso2ObjectType->MimeType_isUsed = 0u;
	iso2ObjectType->Encoding_isUsed = 0u;
	iso2ObjectType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2SensorOrderListType( iso2SensorOrderListType* iso2SensorOrderListType) {
	iso2SensorOrderListType->SensorPosition.arrayLen = 0u;
}

void V2gFac_init_iso2ChargeParameterDiscoveryReqType( iso2ChargeParameterDiscoveryReqType* iso2ChargeParameterDiscoveryReqType) {
	iso2ChargeParameterDiscoveryReqType->MaxSupportingPoints_isUsed = 0u;
	iso2ChargeParameterDiscoveryReqType->EVEnergyTransferParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryReqType->AC_EVChargeParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryReqType->AC_EVBidirectionalParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryReqType->DC_EVChargeParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryReqType->DC_EVBidirectionalParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryReqType->WPT_EVChargeParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryReqType->MinimumPMaxRequest_isUsed = 0u;
}

void V2gFac_init_iso2ParameterType( iso2ParameterType* iso2ParameterType) {
	iso2ParameterType->boolValue_isUsed = 0u;
	iso2ParameterType->byteValue_isUsed = 0u;
	iso2ParameterType->shortValue_isUsed = 0u;
	iso2ParameterType->intValue_isUsed = 0u;
	iso2ParameterType->physicalValue_isUsed = 0u;
	iso2ParameterType->stringValue_isUsed = 0u;
}

void V2gFac_init_iso2SessionStopReqType( iso2SessionStopReqType* iso2SessionStopReqType) {
	(void)iso2SessionStopReqType; /* avoid unused warning */
}

void V2gFac_init_iso2SensorMeasurementsType( iso2SensorMeasurementsType* iso2SensorMeasurementsType) {
	(void)iso2SensorMeasurementsType; /* avoid unused warning */
}

void V2gFac_init_iso2DC_EVSEChargeParameterType( iso2DC_EVSEChargeParameterType* iso2DC_EVSEChargeParameterType) {
	iso2DC_EVSEChargeParameterType->EVSECurrentRegulationTolerance_isUsed = 0u;
	iso2DC_EVSEChargeParameterType->EVSEEnergyToBeDelivered_isUsed = 0u;
}

void V2gFac_init_iso2SensorPackageListType( iso2SensorPackageListType* iso2SensorPackageListType) {
	iso2SensorPackageListType->SensorPackage.arrayLen = 0u;
}

void V2gFac_init_iso2MeasurementDataListType( iso2MeasurementDataListType* iso2MeasurementDataListType) {
	iso2MeasurementDataListType->MeasurementData.arrayLen = 0u;
}

void V2gFac_init_iso2CertificateChainType( iso2CertificateChainType* iso2CertificateChainType) {
	iso2CertificateChainType->Id_isUsed = 0u;
	iso2CertificateChainType->SubCertificates_isUsed = 0u;
}

void V2gFac_init_iso2SignaturePropertyType( iso2SignaturePropertyType* iso2SignaturePropertyType) {
	iso2SignaturePropertyType->Id_isUsed = 0u;
	iso2SignaturePropertyType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2TransformType( iso2TransformType* iso2TransformType) {
	iso2TransformType->ANY_isUsed = 0u;
	iso2TransformType->XPath.arrayLen = 0u;
}

void V2gFac_init_iso2EMAIDType( iso2EMAIDType* iso2EMAIDType) {
	(void)iso2EMAIDType; /* avoid unused warning */
}

void V2gFac_init_iso2DSAKeyValueType( iso2DSAKeyValueType* iso2DSAKeyValueType) {
	iso2DSAKeyValueType->P_isUsed = 0u;
	iso2DSAKeyValueType->Q_isUsed = 0u;
	iso2DSAKeyValueType->G_isUsed = 0u;
	iso2DSAKeyValueType->J_isUsed = 0u;
	iso2DSAKeyValueType->Seed_isUsed = 0u;
	iso2DSAKeyValueType->PgenCounter_isUsed = 0u;
}

void V2gFac_init_iso2EntryType( iso2EntryType* iso2EntryType) {
	(void)iso2EntryType; /* avoid unused warning */
}

void V2gFac_init_iso2MessageHeaderType( iso2MessageHeaderType* iso2MessageHeaderType) {
	iso2MessageHeaderType->Signature_isUsed = 0u;
}

void V2gFac_init_iso2WPT_EVChargeParameterType( iso2WPT_EVChargeParameterType* iso2WPT_EVChargeParameterType) {
	iso2WPT_EVChargeParameterType->EVTargetEnergyRequest_isUsed = 0u;
	iso2WPT_EVChargeParameterType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2WPT_EVChargeParameterType->EVMinimumEnergyRequest_isUsed = 0u;
}

void V2gFac_init_iso2DisconnectChargingDeviceReqType( iso2DisconnectChargingDeviceReqType* iso2DisconnectChargingDeviceReqType) {
	(void)iso2DisconnectChargingDeviceReqType; /* avoid unused warning */
}

void V2gFac_init_iso2ChargeLoopReqType( iso2ChargeLoopReqType* iso2ChargeLoopReqType) {
	iso2ChargeLoopReqType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2ChargeLoopReqType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2ChargeLoopReqType->DisplayParameters_isUsed = 0u;
}

void V2gFac_init_iso2V2GRequestType( iso2V2GRequestType* iso2V2GRequestType) {
	(void)iso2V2GRequestType; /* avoid unused warning */
}

void V2gFac_init_iso2MeteringReceiptResType( iso2MeteringReceiptResType* iso2MeteringReceiptResType) {
	iso2MeteringReceiptResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2SessionSetupResType( iso2SessionSetupResType* iso2SessionSetupResType) {
	iso2SessionSetupResType->EVSEStatus_isUsed = 0u;
	iso2SessionSetupResType->EVSETimeStamp_isUsed = 0u;
}

void V2gFac_init_iso2AC_BidirectionalControlReqType( iso2AC_BidirectionalControlReqType* iso2AC_BidirectionalControlReqType) {
	iso2AC_BidirectionalControlReqType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2AC_BidirectionalControlReqType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2AC_BidirectionalControlReqType->DisplayParameters_isUsed = 0u;
	iso2AC_BidirectionalControlReqType->EVOperation_isUsed = 0u;
	iso2AC_BidirectionalControlReqType->EVMaximumDischargePower_isUsed = 0u;
	iso2AC_BidirectionalControlReqType->EVMaximumDischargeCurrent_isUsed = 0u;
	iso2AC_BidirectionalControlReqType->EVMinimumDischargeCurrent_isUsed = 0u;
}

void V2gFac_init_iso2MV_EVSEFinePositioningParametersType( iso2MV_EVSEFinePositioningParametersType* iso2MV_EVSEFinePositioningParametersType) {
	(void)iso2MV_EVSEFinePositioningParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2ReferenceType( iso2ReferenceType* iso2ReferenceType) {
	iso2ReferenceType->Id_isUsed = 0u;
	iso2ReferenceType->URI_isUsed = 0u;
	iso2ReferenceType->Type_isUsed = 0u;
	iso2ReferenceType->Transforms_isUsed = 0u;
}

void V2gFac_init_iso2EVSEEnergyTransferParameterType( iso2EVSEEnergyTransferParameterType* iso2EVSEEnergyTransferParameterType) {
	(void)iso2EVSEEnergyTransferParameterType; /* avoid unused warning */
}

void V2gFac_init_iso2MeteringReceiptReqType( iso2MeteringReceiptReqType* iso2MeteringReceiptReqType) {
	iso2MeteringReceiptReqType->SAScheduleTupleID_isUsed = 0u;
}

void V2gFac_init_iso2KeyValueType( iso2KeyValueType* iso2KeyValueType) {
	iso2KeyValueType->DSAKeyValue_isUsed = 0u;
	iso2KeyValueType->RSAKeyValue_isUsed = 0u;
	iso2KeyValueType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2SensorListType( iso2SensorListType* iso2SensorListType) {
	iso2SensorListType->Sensor.arrayLen = 0u;
}

void V2gFac_init_iso2CurrentDemandReqType( iso2CurrentDemandReqType* iso2CurrentDemandReqType) {
	iso2CurrentDemandReqType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2CurrentDemandReqType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2CurrentDemandReqType->DisplayParameters_isUsed = 0u;
	iso2CurrentDemandReqType->EVMaximumCurrent_isUsed = 0u;
	iso2CurrentDemandReqType->EVMaximumPower_isUsed = 0u;
	iso2CurrentDemandReqType->EVMaximumVoltage_isUsed = 0u;
}

void V2gFac_init_iso2FinePositioningSetupReqType( iso2FinePositioningSetupReqType* iso2FinePositioningSetupReqType) {
	iso2FinePositioningSetupReqType->EVFinePositioningSetupParameters_isUsed = 0u;
	iso2FinePositioningSetupReqType->LFA_EVFinePositioningSetupParameters_isUsed = 0u;
}

void V2gFac_init_iso2LFA_EVFinePositioningSetupParametersType( iso2LFA_EVFinePositioningSetupParametersType* iso2LFA_EVFinePositioningSetupParametersType) {
	(void)iso2LFA_EVFinePositioningSetupParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2SAScheduleTupleType( iso2SAScheduleTupleType* iso2SAScheduleTupleType) {
	iso2SAScheduleTupleType->PMaxDischargeSchedule_isUsed = 0u;
	iso2SAScheduleTupleType->SalesTariff_isUsed = 0u;
	iso2SAScheduleTupleType->BuyBackTariff_isUsed = 0u;
}

void V2gFac_init_iso2WPT_EVSEChargeParameterType( iso2WPT_EVSEChargeParameterType* iso2WPT_EVSEChargeParameterType) {
	(void)iso2WPT_EVSEChargeParameterType; /* avoid unused warning */
}

void V2gFac_init_iso2FinePositioningResType( iso2FinePositioningResType* iso2FinePositioningResType) {
	iso2FinePositioningResType->EVSEStatus_isUsed = 0u;
	iso2FinePositioningResType->EVSEFinePositioningParameters_isUsed = 0u;
	iso2FinePositioningResType->Generic_EVSEFinePositioningParameters_isUsed = 0u;
	iso2FinePositioningResType->LFA_EVSEFinePositioningParameters_isUsed = 0u;
	iso2FinePositioningResType->MV_EVSEFinePositioningParameters_isUsed = 0u;
}

void V2gFac_init_iso2BodyBaseType( iso2BodyBaseType* iso2BodyBaseType) {
	(void)iso2BodyBaseType; /* avoid unused warning */
}

void V2gFac_init_iso2ServiceDetailResType( iso2ServiceDetailResType* iso2ServiceDetailResType) {
	iso2ServiceDetailResType->EVSEStatus_isUsed = 0u;
	iso2ServiceDetailResType->ServiceParameterList_isUsed = 0u;
}

void V2gFac_init_iso2PowerDeliveryReqType( iso2PowerDeliveryReqType* iso2PowerDeliveryReqType) {
	iso2PowerDeliveryReqType->EVOperation_isUsed = 0u;
	iso2PowerDeliveryReqType->SAScheduleTupleID_isUsed = 0u;
	iso2PowerDeliveryReqType->ChargingProfile_isUsed = 0u;
}

void V2gFac_init_iso2PairingResType( iso2PairingResType* iso2PairingResType) {
	iso2PairingResType->EVSEStatus_isUsed = 0u;
	iso2PairingResType->PairingParameters_isUsed = 0u;
}

void V2gFac_init_iso2AuthorizationReqType( iso2AuthorizationReqType* iso2AuthorizationReqType) {
	iso2AuthorizationReqType->Id_isUsed = 0u;
	iso2AuthorizationReqType->GenChallenge_isUsed = 0u;
}

void V2gFac_init_iso2ParameterSetType( iso2ParameterSetType* iso2ParameterSetType) {
	iso2ParameterSetType->Parameter.arrayLen = 0u;
}

void V2gFac_init_iso2SPKIDataType( iso2SPKIDataType* iso2SPKIDataType) {
	iso2SPKIDataType->SPKISexp.arrayLen = 0u;
	iso2SPKIDataType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2PaymentDetailsResType( iso2PaymentDetailsResType* iso2PaymentDetailsResType) {
	iso2PaymentDetailsResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2SignatureMethodType( iso2SignatureMethodType* iso2SignatureMethodType) {
	iso2SignatureMethodType->HMACOutputLength_isUsed = 0u;
	iso2SignatureMethodType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2AC_BidirectionalControlResType( iso2AC_BidirectionalControlResType* iso2AC_BidirectionalControlResType) {
	iso2AC_BidirectionalControlResType->EVSEStatus_isUsed = 0u;
	iso2AC_BidirectionalControlResType->SAScheduleTupleID_isUsed = 0u;
	iso2AC_BidirectionalControlResType->MeterInfo_isUsed = 0u;
	iso2AC_BidirectionalControlResType->ReceiptRequired_isUsed = 0u;
}

void V2gFac_init_iso2VehicleCheckOutReqType( iso2VehicleCheckOutReqType* iso2VehicleCheckOutReqType) {
	(void)iso2VehicleCheckOutReqType; /* avoid unused warning */
}

void V2gFac_init_iso2WeldingDetectionReqType( iso2WeldingDetectionReqType* iso2WeldingDetectionReqType) {
	(void)iso2WeldingDetectionReqType; /* avoid unused warning */
}

void V2gFac_init_iso2AlignmentCheckResType( iso2AlignmentCheckResType* iso2AlignmentCheckResType) {
	iso2AlignmentCheckResType->EVSEStatus_isUsed = 0u;
	iso2AlignmentCheckResType->AlignmentCheckParameters_isUsed = 0u;
}

void V2gFac_init_iso2PowerDemandReqType( iso2PowerDemandReqType* iso2PowerDemandReqType) {
	iso2PowerDemandReqType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2PowerDemandReqType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2PowerDemandReqType->DisplayParameters_isUsed = 0u;
	iso2PowerDemandReqType->PowerDemandParameters_isUsed = 0u;
}

void V2gFac_init_iso2MinimumPMaxRequestType( iso2MinimumPMaxRequestType* iso2MinimumPMaxRequestType) {
	iso2MinimumPMaxRequestType->MinimumPMaxScheduleEntry.arrayLen = 0u;
}

void V2gFac_init_iso2DisconnectChargingDeviceResType( iso2DisconnectChargingDeviceResType* iso2DisconnectChargingDeviceResType) {
	iso2DisconnectChargingDeviceResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2SessionSetupReqType( iso2SessionSetupReqType* iso2SessionSetupReqType) {
	(void)iso2SessionSetupReqType; /* avoid unused warning */
}

void V2gFac_init_iso2PaymentDetailsReqType( iso2PaymentDetailsReqType* iso2PaymentDetailsReqType) {
	(void)iso2PaymentDetailsReqType; /* avoid unused warning */
}

void V2gFac_init_iso2Generic_EVFinePositioningParametersType( iso2Generic_EVFinePositioningParametersType* iso2Generic_EVFinePositioningParametersType) {
	(void)iso2Generic_EVFinePositioningParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2ConnectChargingDeviceReqType( iso2ConnectChargingDeviceReqType* iso2ConnectChargingDeviceReqType) {
	(void)iso2ConnectChargingDeviceReqType; /* avoid unused warning */
}

void V2gFac_init_iso2AC_EVSEChargeParameterType( iso2AC_EVSEChargeParameterType* iso2AC_EVSEChargeParameterType) {
	(void)iso2AC_EVSEChargeParameterType; /* avoid unused warning */
}

void V2gFac_init_iso2SalesTariffEntryType( iso2SalesTariffEntryType* iso2SalesTariffEntryType) {
	iso2SalesTariffEntryType->EPriceLevel_isUsed = 0u;
	iso2SalesTariffEntryType->ConsumptionCost.arrayLen = 0u;
}

void V2gFac_init_iso2DC_EVSEBidirectionalParameterType( iso2DC_EVSEBidirectionalParameterType* iso2DC_EVSEBidirectionalParameterType) {
	iso2DC_EVSEBidirectionalParameterType->EVSECurrentRegulationTolerance_isUsed = 0u;
	iso2DC_EVSEBidirectionalParameterType->EVSEEnergyToBeDelivered_isUsed = 0u;
}

void V2gFac_init_iso2CanonicalizationMethodType( iso2CanonicalizationMethodType* iso2CanonicalizationMethodType) {
	iso2CanonicalizationMethodType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2DisplayParametersType( iso2DisplayParametersType* iso2DisplayParametersType) {
	iso2DisplayParametersType->CurrentRange_isUsed = 0u;
	iso2DisplayParametersType->CurrentSOC_isUsed = 0u;
	iso2DisplayParametersType->TargetSOC_isUsed = 0u;
	iso2DisplayParametersType->BulkSOC_isUsed = 0u;
	iso2DisplayParametersType->MinimumSOC_isUsed = 0u;
	iso2DisplayParametersType->ChargingPerformance_isUsed = 0u;
	iso2DisplayParametersType->RemainingTimeToTargetSOC_isUsed = 0u;
	iso2DisplayParametersType->RemainingTimeToBulkSOC_isUsed = 0u;
	iso2DisplayParametersType->RemainingTimeToMinimumSOC_isUsed = 0u;
	iso2DisplayParametersType->ChargingComplete_isUsed = 0u;
	iso2DisplayParametersType->BulkChargingComplete_isUsed = 0u;
	iso2DisplayParametersType->InletHot_isUsed = 0u;
}

void V2gFac_init_iso2DC_EVBidirectionalParameterType( iso2DC_EVBidirectionalParameterType* iso2DC_EVBidirectionalParameterType) {
	iso2DC_EVBidirectionalParameterType->EVMaximumChargePower_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->EVMinimumChargePower_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->EVTargetEnergyRequest_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->CurrentSOC_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->TargetSOC_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->BulkSOC_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->EVMaximumDischargePower_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->EVMinimumDischargePower_isUsed = 0u;
	iso2DC_EVBidirectionalParameterType->MinimumSOC_isUsed = 0u;
}

void V2gFac_init_iso2PaymentServiceSelectionReqType( iso2PaymentServiceSelectionReqType* iso2PaymentServiceSelectionReqType) {
	iso2PaymentServiceSelectionReqType->SelectedVASList_isUsed = 0u;
}

void V2gFac_init_iso2MagneticVectorType( iso2MagneticVectorType* iso2MagneticVectorType) {
	(void)iso2MagneticVectorType; /* avoid unused warning */
}

void V2gFac_init_iso2PhysicalValueType( iso2PhysicalValueType* iso2PhysicalValueType) {
	(void)iso2PhysicalValueType; /* avoid unused warning */
}

void V2gFac_init_iso2SystemStatusReqType( iso2SystemStatusReqType* iso2SystemStatusReqType) {
	(void)iso2SystemStatusReqType; /* avoid unused warning */
}

void V2gFac_init_iso2SystemStatusResType( iso2SystemStatusResType* iso2SystemStatusResType) {
	iso2SystemStatusResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2EVSEFinePositioningSetupParametersType( iso2EVSEFinePositioningSetupParametersType* iso2EVSEFinePositioningSetupParametersType) {
	(void)iso2EVSEFinePositioningSetupParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2V2GResponseType( iso2V2GResponseType* iso2V2GResponseType) {
	iso2V2GResponseType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2BodyType( iso2BodyType* iso2BodyType) {
	iso2BodyType->BodyElement_isUsed = 0u;
	iso2BodyType->V2GRequest_isUsed = 0u;
	iso2BodyType->DisconnectChargingDeviceReq_isUsed = 0u;
	iso2BodyType->ConnectChargingDeviceReq_isUsed = 0u;
	iso2BodyType->SystemStatusReq_isUsed = 0u;
	iso2BodyType->DC_BidirectionalControlReq_isUsed = 0u;
	iso2BodyType->AC_BidirectionalControlReq_isUsed = 0u;
	iso2BodyType->VehicleCheckOutReq_isUsed = 0u;
	iso2BodyType->VehicleCheckInReq_isUsed = 0u;
	iso2BodyType->PowerDemandReq_isUsed = 0u;
	iso2BodyType->PairingReq_isUsed = 0u;
	iso2BodyType->AlignmentCheckReq_isUsed = 0u;
	iso2BodyType->FinePositioningReq_isUsed = 0u;
	iso2BodyType->FinePositioningSetupReq_isUsed = 0u;
	iso2BodyType->WeldingDetectionReq_isUsed = 0u;
	iso2BodyType->CurrentDemandReq_isUsed = 0u;
	iso2BodyType->PreChargeReq_isUsed = 0u;
	iso2BodyType->CableCheckReq_isUsed = 0u;
	iso2BodyType->ChargingStatusReq_isUsed = 0u;
	iso2BodyType->CertificateInstallationReq_isUsed = 0u;
	iso2BodyType->CertificateUpdateReq_isUsed = 0u;
	iso2BodyType->SessionStopReq_isUsed = 0u;
	iso2BodyType->MeteringReceiptReq_isUsed = 0u;
	iso2BodyType->PowerDeliveryReq_isUsed = 0u;
	iso2BodyType->ChargeParameterDiscoveryReq_isUsed = 0u;
	iso2BodyType->AuthorizationReq_isUsed = 0u;
	iso2BodyType->PaymentDetailsReq_isUsed = 0u;
	iso2BodyType->PaymentServiceSelectionReq_isUsed = 0u;
	iso2BodyType->ServiceDetailReq_isUsed = 0u;
	iso2BodyType->ServiceDiscoveryReq_isUsed = 0u;
	iso2BodyType->SessionSetupReq_isUsed = 0u;
	iso2BodyType->V2GResponse_isUsed = 0u;
	iso2BodyType->DisconnectChargingDeviceRes_isUsed = 0u;
	iso2BodyType->ConnectChargingDeviceRes_isUsed = 0u;
	iso2BodyType->SystemStatusRes_isUsed = 0u;
	iso2BodyType->DC_BidirectionalControlRes_isUsed = 0u;
	iso2BodyType->AC_BidirectionalControlRes_isUsed = 0u;
	iso2BodyType->VehicleCheckOutRes_isUsed = 0u;
	iso2BodyType->VehicleCheckInRes_isUsed = 0u;
	iso2BodyType->PowerDemandRes_isUsed = 0u;
	iso2BodyType->PairingRes_isUsed = 0u;
	iso2BodyType->AlignmentCheckRes_isUsed = 0u;
	iso2BodyType->FinePositioningRes_isUsed = 0u;
	iso2BodyType->FinePositioningSetupRes_isUsed = 0u;
	iso2BodyType->WeldingDetectionRes_isUsed = 0u;
	iso2BodyType->CurrentDemandRes_isUsed = 0u;
	iso2BodyType->PreChargeRes_isUsed = 0u;
	iso2BodyType->CableCheckRes_isUsed = 0u;
	iso2BodyType->ChargingStatusRes_isUsed = 0u;
	iso2BodyType->CertificateInstallationRes_isUsed = 0u;
	iso2BodyType->CertificateUpdateRes_isUsed = 0u;
	iso2BodyType->SessionStopRes_isUsed = 0u;
	iso2BodyType->MeteringReceiptRes_isUsed = 0u;
	iso2BodyType->PowerDeliveryRes_isUsed = 0u;
	iso2BodyType->ChargeParameterDiscoveryRes_isUsed = 0u;
	iso2BodyType->AuthorizationRes_isUsed = 0u;
	iso2BodyType->PaymentDetailsRes_isUsed = 0u;
	iso2BodyType->PaymentServiceSelectionRes_isUsed = 0u;
	iso2BodyType->ServiceDetailRes_isUsed = 0u;
	iso2BodyType->ServiceDiscoveryRes_isUsed = 0u;
	iso2BodyType->SessionSetupRes_isUsed = 0u;
}

void V2gFac_init_iso2PreChargeResType( iso2PreChargeResType* iso2PreChargeResType) {
	iso2PreChargeResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2EVSEFinePositioningParametersType( iso2EVSEFinePositioningParametersType* iso2EVSEFinePositioningParametersType) {
	(void)iso2EVSEFinePositioningParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2PaymentServiceSelectionResType( iso2PaymentServiceSelectionResType* iso2PaymentServiceSelectionResType) {
	iso2PaymentServiceSelectionResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2DigestMethodType( iso2DigestMethodType* iso2DigestMethodType) {
	iso2DigestMethodType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2TargetPositionType( iso2TargetPositionType* iso2TargetPositionType) {
	(void)iso2TargetPositionType; /* avoid unused warning */
}

void V2gFac_init_iso2LFA_EVFinePositioningParametersType( iso2LFA_EVFinePositioningParametersType* iso2LFA_EVFinePositioningParametersType) {
	(void)iso2LFA_EVFinePositioningParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2DC_EVChargeParameterType( iso2DC_EVChargeParameterType* iso2DC_EVChargeParameterType) {
	iso2DC_EVChargeParameterType->EVMaximumChargePower_isUsed = 0u;
	iso2DC_EVChargeParameterType->EVMinimumChargePower_isUsed = 0u;
	iso2DC_EVChargeParameterType->EVTargetEnergyRequest_isUsed = 0u;
	iso2DC_EVChargeParameterType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2DC_EVChargeParameterType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2DC_EVChargeParameterType->CurrentSOC_isUsed = 0u;
	iso2DC_EVChargeParameterType->TargetSOC_isUsed = 0u;
	iso2DC_EVChargeParameterType->BulkSOC_isUsed = 0u;
}

void V2gFac_init_iso2ServiceDetailReqType( iso2ServiceDetailReqType* iso2ServiceDetailReqType) {
	(void)iso2ServiceDetailReqType; /* avoid unused warning */
}

void V2gFac_init_iso2PreChargeReqType( iso2PreChargeReqType* iso2PreChargeReqType) {
	(void)iso2PreChargeReqType; /* avoid unused warning */
}

void V2gFac_init_iso2ManifestType( iso2ManifestType* iso2ManifestType) {
	iso2ManifestType->Id_isUsed = 0u;
	iso2ManifestType->Reference.arrayLen = 0u;
}

void V2gFac_init_iso2AnonType_V2G_Message( iso2AnonType_V2G_Message* iso2AnonType_V2G_Message) {
	(void)iso2AnonType_V2G_Message; /* avoid unused warning */
}

void V2gFac_init_iso2SelectedServiceListType( iso2SelectedServiceListType* iso2SelectedServiceListType) {
	iso2SelectedServiceListType->SelectedService.arrayLen = 0u;
}

void V2gFac_init_iso2Generic_EVSEFinePositioningParametersType( iso2Generic_EVSEFinePositioningParametersType* iso2Generic_EVSEFinePositioningParametersType) {
	(void)iso2Generic_EVSEFinePositioningParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2CartesianCoordinatesType( iso2CartesianCoordinatesType* iso2CartesianCoordinatesType) {
	(void)iso2CartesianCoordinatesType; /* avoid unused warning */
}

void V2gFac_init_iso2KeyInfoType( iso2KeyInfoType* iso2KeyInfoType) {
	iso2KeyInfoType->Id_isUsed = 0u;
	iso2KeyInfoType->KeyName.arrayLen = 0u;
	iso2KeyInfoType->KeyValue.arrayLen = 0u;
	iso2KeyInfoType->RetrievalMethod.arrayLen = 0u;
	iso2KeyInfoType->X509Data.arrayLen = 0u;
	iso2KeyInfoType->PGPData.arrayLen = 0u;
	iso2KeyInfoType->SPKIData.arrayLen = 0u;
	iso2KeyInfoType->MgmtData.arrayLen = 0u;
	iso2KeyInfoType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2SubCertificatesType( iso2SubCertificatesType* iso2SubCertificatesType) {
	iso2SubCertificatesType->Certificate.arrayLen = 0u;
}

void V2gFac_init_iso2ListOfRootCertificateIDsType( iso2ListOfRootCertificateIDsType* iso2ListOfRootCertificateIDsType) {
	iso2ListOfRootCertificateIDsType->RootCertificateID.arrayLen = 0u;
}

void V2gFac_init_iso2EVEnergyTransferParameterType( iso2EVEnergyTransferParameterType* iso2EVEnergyTransferParameterType) {
	(void)iso2EVEnergyTransferParameterType; /* avoid unused warning */
}

void V2gFac_init_iso2ContractSignatureEncryptedPrivateKeyType( iso2ContractSignatureEncryptedPrivateKeyType* iso2ContractSignatureEncryptedPrivateKeyType) {
	(void)iso2ContractSignatureEncryptedPrivateKeyType; /* avoid unused warning */
}

void V2gFac_init_iso2MagneticVectorSetupListType( iso2MagneticVectorSetupListType* iso2MagneticVectorSetupListType) {
	iso2MagneticVectorSetupListType->MagneticVectorSetup.arrayLen = 0u;
}

void V2gFac_init_iso2PairingReqType( iso2PairingReqType* iso2PairingReqType) {
	iso2PairingReqType->PairingParameters_isUsed = 0u;
}

void V2gFac_init_iso2CurrentDemandResType( iso2CurrentDemandResType* iso2CurrentDemandResType) {
	iso2CurrentDemandResType->EVSEStatus_isUsed = 0u;
	iso2CurrentDemandResType->EVSEMaximumPower_isUsed = 0u;
	iso2CurrentDemandResType->EVSEMaximumCurrent_isUsed = 0u;
	iso2CurrentDemandResType->EVSEMaximumVoltage_isUsed = 0u;
	iso2CurrentDemandResType->SAScheduleTupleID_isUsed = 0u;
	iso2CurrentDemandResType->MeterInfo_isUsed = 0u;
	iso2CurrentDemandResType->ReceiptRequired_isUsed = 0u;
}

void V2gFac_init_iso2X509IssuerSerialType( iso2X509IssuerSerialType* iso2X509IssuerSerialType) {
	(void)iso2X509IssuerSerialType; /* avoid unused warning */
}

void V2gFac_init_iso2ChargingStatusReqType( iso2ChargingStatusReqType* iso2ChargingStatusReqType) {
	iso2ChargingStatusReqType->EVMaximumEnergyRequest_isUsed = 0u;
	iso2ChargingStatusReqType->EVMinimumEnergyRequest_isUsed = 0u;
	iso2ChargingStatusReqType->DisplayParameters_isUsed = 0u;
	iso2ChargingStatusReqType->EVMaximumChargePower_isUsed = 0u;
	iso2ChargingStatusReqType->EVMaximumChargeCurrent_isUsed = 0u;
	iso2ChargingStatusReqType->EVMinimumChargeCurrent_isUsed = 0u;
}

void V2gFac_init_iso2CertificateInstallationResType( iso2CertificateInstallationResType* iso2CertificateInstallationResType) {
	iso2CertificateInstallationResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2SensorPackageType( iso2SensorPackageType* iso2SensorPackageType) {
	iso2SensorPackageType->SensorMeasurements.arrayLen = 0u;
}

void V2gFac_init_iso2PGPDataType( iso2PGPDataType* iso2PGPDataType) {
	iso2PGPDataType->PGPKeyID_isUsed = 0u;
	iso2PGPDataType->PGPKeyPacket_isUsed = 0u;
	iso2PGPDataType->ANY_isUsed = 0u;
}

void V2gFac_init_iso2ServiceDiscoveryResType( iso2ServiceDiscoveryResType* iso2ServiceDiscoveryResType) {
	iso2ServiceDiscoveryResType->EVSEStatus_isUsed = 0u;
	iso2ServiceDiscoveryResType->VASList_isUsed = 0u;
}

void V2gFac_init_iso2ServiceIDListType( iso2ServiceIDListType* iso2ServiceIDListType) {
	iso2ServiceIDListType->ServiceID.arrayLen = 0u;
}

void V2gFac_init_iso2EVFinePositioningSetupParametersType( iso2EVFinePositioningSetupParametersType* iso2EVFinePositioningSetupParametersType) {
	(void)iso2EVFinePositioningSetupParametersType; /* avoid unused warning */
}

void V2gFac_init_iso2ChargeParameterDiscoveryResType( iso2ChargeParameterDiscoveryResType* iso2ChargeParameterDiscoveryResType) {
	iso2ChargeParameterDiscoveryResType->EVSEStatus_isUsed = 0u;
	iso2ChargeParameterDiscoveryResType->SAScheduleList_isUsed = 0u;
	iso2ChargeParameterDiscoveryResType->EVSEEnergyTransferParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryResType->AC_EVSEChargeParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryResType->AC_EVSEBidirectionalParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryResType->DC_EVSEChargeParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryResType->DC_EVSEBidirectionalParameter_isUsed = 0u;
	iso2ChargeParameterDiscoveryResType->WPT_EVSEChargeParameter_isUsed = 0u;
}

void V2gFac_init_iso2PowerDemandResType( iso2PowerDemandResType* iso2PowerDemandResType) {
	iso2PowerDemandResType->EVSEStatus_isUsed = 0u;
	iso2PowerDemandResType->SAScheduleTupleID_isUsed = 0u;
	iso2PowerDemandResType->MeterInfo_isUsed = 0u;
	iso2PowerDemandResType->ReceiptRequired_isUsed = 0u;
	iso2PowerDemandResType->PowerDemandParameters_isUsed = 0u;
}

void V2gFac_init_iso2ChargingProfileType( iso2ChargingProfileType* iso2ChargingProfileType) {
	iso2ChargingProfileType->ProfileEntry.arrayLen = 0u;
}

void V2gFac_init_iso2FinePositioningReqType( iso2FinePositioningReqType* iso2FinePositioningReqType) {
	iso2FinePositioningReqType->EVFinePositioningParameters_isUsed = 0u;
	iso2FinePositioningReqType->Generic_EVFinePositioningParameters_isUsed = 0u;
	iso2FinePositioningReqType->LFA_EVFinePositioningParameters_isUsed = 0u;
}

void V2gFac_init_iso2SalesTariffType( iso2SalesTariffType* iso2SalesTariffType) {
	iso2SalesTariffType->SalesTariffDescription_isUsed = 0u;
	iso2SalesTariffType->NumEPriceLevels_isUsed = 0u;
	iso2SalesTariffType->SalesTariffEntry.arrayLen = 0u;
}

void V2gFac_init_iso2SensorType( iso2SensorType* iso2SensorType) {
	(void)iso2SensorType; /* avoid unused warning */
}

void V2gFac_init_iso2SignatureValueType( iso2SignatureValueType* iso2SignatureValueType) {
	iso2SignatureValueType->Id_isUsed = 0u;
}

void V2gFac_init_iso2SignedInfoType( iso2SignedInfoType* iso2SignedInfoType) {
	iso2SignedInfoType->Id_isUsed = 0u;
	iso2SignedInfoType->Reference.arrayLen = 0u;
}

void V2gFac_init_iso2PowerDeliveryResType( iso2PowerDeliveryResType* iso2PowerDeliveryResType) {
	iso2PowerDeliveryResType->EVSEStatus_isUsed = 0u;
}

void V2gFac_init_iso2CableCheckReqType( iso2CableCheckReqType* iso2CableCheckReqType) {
	(void)iso2CableCheckReqType; /* avoid unused warning */
}

void V2gFac_init_iso2SelectedServiceType( iso2SelectedServiceType* iso2SelectedServiceType) {
	(void)iso2SelectedServiceType; /* avoid unused warning */
}

void V2gFac_init_iso2DiffieHellmanPublickeyType( iso2DiffieHellmanPublickeyType* iso2DiffieHellmanPublickeyType) {
	(void)iso2DiffieHellmanPublickeyType; /* avoid unused warning */
}

void V2gFac_init_iso2EVSEStatusType( iso2EVSEStatusType* iso2EVSEStatusType) {
	(void)iso2EVSEStatusType; /* avoid unused warning */
}



#endif /* DEPLOY_ISO2_CODEC */

#endif


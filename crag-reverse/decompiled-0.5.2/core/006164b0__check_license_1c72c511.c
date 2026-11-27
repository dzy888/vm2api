// 006164b0 check_license

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::check_license */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::check_license
          (undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar1 = <craggemini_core[66f3c71560d70857]::license::LicenseGate>::check
                    (*(longlong *)(param_2 + 0x2d0) + 0x10);
  uVar3 = 0x4b;
  switch(uVar1) {
  case 0:
    uVar4 = 0x10;
    pcVar5 = "A CRAG subscription permit or registration code is required for craggemini.";
    pcVar2 = anon_63b06cc94833867f683611f039574387_226_llvm_6903579140370050947;
    break;
  case 1:
    pcVar2 = "license_expired";
    uVar4 = 0xf;
    pcVar5 = "The CRAGGemini license has expired. Renew the host subscription or license.";
    break;
  case 2:
    pcVar2 = "license_not_yet_valid";
    uVar4 = 0x15;
    pcVar5 = "The CRAGGemini license is not valid yet. Check the UTC clock and start time.";
    uVar3 = 0x4c;
    break;
  case 3:
    pcVar2 = "license_invalid";
    uVar4 = 0xf;
    pcVar5 = "The CRAGGemini license or encrypted package is invalid.";
    uVar3 = 0x37;
    break;
  case 4:
    pcVar2 = "license_binding_mismatch";
    uVar4 = 0x18;
    pcVar5 = "This CRAGGemini permit belongs to a different instance, seat, or host.";
    uVar3 = 0x46;
    break;
  case 5:
    pcVar2 = "license_payload_key_mismatch";
    uVar4 = 0x1c;
    pcVar5 = "The CRAGGemini license payload key does not match the installed package.";
    uVar3 = 0x48;
    break;
  case 6:
    pcVar2 = "license_unconfigured";
    uVar4 = 0x14;
    pcVar5 = 
    "CRAGGemini license trust is unconfigured. Install a build provisioned with the supplier public key."
    ;
    uVar3 = 99;
    break;
  default:
    *param_1 = 0xfffffffffffffffe;
    return param_1;
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = pcVar2;
  param_1[2] = uVar4;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = pcVar5;
  param_1[5] = uVar3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x6020193;
  return param_1;
}



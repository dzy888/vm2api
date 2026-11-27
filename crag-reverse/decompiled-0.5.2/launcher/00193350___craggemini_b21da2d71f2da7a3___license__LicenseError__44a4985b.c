// 00193350 <craggemini[b21da2d71f2da7a3]::license::LicenseError>

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::custom::<craggemini[b21da2d71f2da7a3]::license::LicenseError>
    */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::custom::
<craggemini[b21da2d71f2da7a3]::license::LicenseError>(undefined1 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_58 = 0;
  uStack_50 = 1;
  local_48 = 0;
  local_30 = 0x60000020;
  local_40 = &local_58;
  local_38 = &anon_aa8a284406637d3c026889b109c79dc6_19_llvm_9655133765307635171;
  local_5a = param_1;
  cVar2 = <craggemini[b21da2d71f2da7a3]::license::LicenseError_as_core[c0acaeba6ab4c2e0]::fmt::Display>
          ::fmt(&local_5a,&local_40);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00219ec0)
              (anon_aa8a284406637d3c026889b109c79dc6_15_llvm_9655133765307635171,&local_59,
               &anon_aa8a284406637d3c026889b109c79dc6_22_llvm_9655133765307635171);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18 = local_48;
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = (undefined4)uStack_50;
  uStack_1c = uStack_50._4_4_;
  (*(code *)PTR_make_error_0021a290)();
  return;
}



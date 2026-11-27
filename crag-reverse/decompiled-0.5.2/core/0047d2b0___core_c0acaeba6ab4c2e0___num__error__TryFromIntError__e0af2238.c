// 0047d2b0 <core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::custom::<core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>
    */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::custom::
<core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>(void)

{
  code *pcVar1;
  char cVar2;
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
  local_38 = &anon_d4d3cd51d1d91a17bb767b00236b3a9b_133_llvm_17589326713533067298;
  cVar2 = (*(code *)PTR_fmt_007999f0)();
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_72_llvm_17589326713533067298,&local_59,
               &anon_d4d3cd51d1d91a17bb767b00236b3a9b_136_llvm_17589326713533067298);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18 = local_48;
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = (undefined4)uStack_50;
  uStack_1c = uStack_50._4_4_;
  (*(code *)PTR_make_error_007999e8)();
  return;
}



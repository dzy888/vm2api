// 00193250 <serde_json[dc3825464c436029]::error::Error>

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::custom::<serde_json[dc3825464c436029]::error::Error> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::custom::
<serde_json[dc3825464c436029]::error::Error>(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_60 = 0;
  uStack_58 = 1;
  local_50 = 0;
  local_30 = 0x60000020;
  local_40 = &local_60;
  local_38 = &anon_aa8a284406637d3c026889b109c79dc6_19_llvm_9655133765307635171;
  local_48 = param_1;
  cVar2 = (*(code *)PTR_fmt_00219e70)();
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00219ec0)
              (anon_aa8a284406637d3c026889b109c79dc6_15_llvm_9655133765307635171,&local_61,
               &anon_aa8a284406637d3c026889b109c79dc6_22_llvm_9655133765307635171);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18 = local_50;
  local_28 = (undefined4)local_60;
  uStack_24 = local_60._4_4_;
  uStack_20 = (undefined4)uStack_58;
  uStack_1c = uStack_58._4_4_;
  uVar3 = (*(code *)PTR_make_error_0021a290)();
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
            (param_1,&local_40);
  return uVar3;
}



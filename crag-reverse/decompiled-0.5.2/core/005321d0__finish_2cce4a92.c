// 005321d0 finish

/* <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>::finish */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>::finish
          (undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((((param_2[2] == 0) && (param_2[5] == 0)) && (param_2[8] == 0)) && (param_2[0xb] == 0)) {
    *param_1 = 0xffffffffffffffff;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>(param_2);
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *puVar3 = 0x6e61747369737361;
    *(undefined1 *)(puVar3 + 1) = 0x74;
    param_1[5] = param_2[2];
    uVar2 = param_2[1];
    param_1[3] = *param_2;
    param_1[4] = uVar2;
    param_1[8] = param_2[5];
    uVar2 = param_2[4];
    param_1[6] = param_2[3];
    param_1[7] = uVar2;
    uVar2 = param_2[7];
    param_1[0xc] = param_2[6];
    param_1[0xd] = uVar2;
    param_1[0xe] = param_2[8];
    uVar2 = param_2[10];
    param_1[0xf] = param_2[9];
    param_1[0x10] = uVar2;
    param_1[0x11] = param_2[0xb];
    *param_1 = 9;
    param_1[1] = puVar3;
    param_1[2] = 9;
    param_1[9] = 0;
    param_1[10] = 8;
    param_1[0xb] = 0;
  }
  return param_1;
}



// 0068a090 new

/* <craggemini_core[66f3c71560d70857]::bridge::Bridge>::new */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::bridge::Bridge>::new(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar5 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
  if (lVar5 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 3;
  param_1[6] = lVar5;
  param_1[7] = 0x2000;
  param_1[0x16] = 0;
  param_1[0x17] = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x27] = "agy_tui_bridge_v1";
  param_1[0x28] = 0x11;
  param_1[0x1a] = 8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0xe] = 2;
  param_1[0x12] = 2;
  param_1[0x1d] = 8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x2000000;
  param_1[0x20] = 0;
  param_1[0x21] = 8;
  param_1[10] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 1;
  param_1[0x29] = 0;
  param_1[0xc] = 0;
  return param_1;
}



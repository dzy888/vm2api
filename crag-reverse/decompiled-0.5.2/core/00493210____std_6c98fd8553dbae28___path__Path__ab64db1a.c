// 00493210 <&std[6c98fd8553dbae28]::path::Path>

/* <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::connect::<&std[6c98fd8553dbae28]::path::Path>
    */

undefined4 * __rustcall
<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::connect::
<&std[6c98fd8553dbae28]::path::Path>
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_100;
  undefined4 local_fc;
  undefined4 uStackY_f8;
  undefined4 uStackY_f4;
  undefined4 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d4;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 local_8c;
  
  uVar3 = (*(code *)PTR_new_00799ab8)(param_4,1);
  if ((char)local_100 == '\0') {
    (*(code *)PTR_sockaddr_un_00799ac0)(uVar3,param_3);
    if (local_100 == 1) {
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStackY_f4,uStackY_f8);
    }
    else {
      iVar1 = (*(code *)PTR_connect_00799ac8)
                        (CONCAT44(uStackY_f4,uStackY_f8),local_8c,in_stack_ffffffffffffff30,
                         in_stack_ffffffffffffff40,uStack_e4,uStack_dc,uStack_d4,uStack_cc,uStack_c4
                         ,uStack_bc,uStack_b4,uStack_ac,uStack_a4,uStack_9c,
                         CONCAT22(uStack_92,uStack_94));
      if (iVar1 != -1) {
        param_1[1] = local_fc;
        *param_1 = 0;
        return param_1;
      }
      piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar1 = *piVar2;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    }
    *param_1 = 1;
    (*(code *)PTR_close_00799030)();
  }
  else {
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStackY_f4,uStackY_f8);
    *param_1 = 1;
  }
  return param_1;
}



// 0070f8f0 accept

/* <mio[4b4dae02747c797f]::net::uds::listener::UnixListener>::accept */

int * __rustcall <mio[4b4dae02747c797f]::net::uds::listener::UnixListener>::accept(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 extraout_XMM0_Da;
  uint uStack_10c;
  undefined8 uStack_108;
  char acStack_107 [7];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined8 uStack_a2;
  char cStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined6 uStack_2c;
  undefined2 uStack_26;
  undefined6 uStack_24;
  int iStack_1c;
  
  uStack_a8 = 0;
  uStack_a2 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_aa = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_10c = 0x6e;
  iVar2 = (*(code *)PTR_accept4_0079aa40)(0x80800,&uStack_10c);
  if (iVar2 < 0) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar2 << 0x20 | 2;
    *param_1 = -1;
  }
  else {
    uVar5 = 0;
    if (acStack_107[1] != '\0') {
      uVar5 = (ulonglong)uStack_10c - 2;
    }
    if (0x6c < uVar5) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&anon_e028aac905421e2c9e47b66f9d5ebdd3_10_llvm_3338540630057475929,0x6c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar5 - 1;
      if (acStack_107[uVar5] != '\0') {
        uVar4 = uVar5;
      }
    }
    (*(code *)PTR_sockaddr_un_00799ac0)(extraout_XMM0_Da,uVar4);
    if (cStack_90 == '\0') {
      *(ulonglong *)((longlong)param_1 + 0x6e) = CONCAT62(uStack_24,uStack_26);
      *(undefined8 *)(param_1 + 0x18) = uStack_34;
      *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_26,uStack_2c);
      *(undefined8 *)(param_1 + 0x14) = uStack_44;
      *(undefined8 *)(param_1 + 0x16) = uStack_3c;
      *(undefined8 *)(param_1 + 0x10) = uStack_54;
      *(undefined8 *)(param_1 + 0x12) = uStack_4c;
      *(undefined8 *)(param_1 + 0xc) = uStack_64;
      *(undefined8 *)(param_1 + 0xe) = uStack_5c;
      *(undefined8 *)(param_1 + 8) = uStack_74;
      *(undefined8 *)(param_1 + 10) = uStack_6c;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_80,uStack_84);
      *(undefined8 *)(param_1 + 6) = uStack_7c;
      *param_1 = iVar2;
      param_1[1] = iStack_1c;
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_88,uStack_8c);
    }
    else {
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_84,uStack_88);
      *param_1 = -1;
      (*(code *)PTR_close_00799030)();
    }
  }
  return param_1;
}



// 00775e80 read_ipv6_addr

/* <core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv6_addr */

void __rustcall
<core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv6_addr
          (undefined1 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined6 local_48;
  undefined2 local_42;
  undefined6 uStack_40;
  undefined1 local_38 [16];
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  local_38 = (undefined1  [16])0x0;
  auVar9 = read_ipv6_addr::read_groups(param_2,local_38,8);
  if (auVar9._0_8_ == 8) {
LAB_00775ebc:
    auVar8._0_2_ = local_38._0_2_ >> 8;
    auVar8._2_2_ = local_38._2_2_ >> 8;
    auVar8._4_2_ = local_38._4_2_ >> 8;
    auVar8._6_2_ = local_38._6_2_ >> 8;
    auVar8._8_2_ = local_38._8_2_ >> 8;
    auVar8._10_2_ = local_38._10_2_ >> 8;
    auVar8._12_2_ = local_38._12_2_ >> 8;
    auVar8._14_2_ = local_38._14_2_ >> 8;
    auVar9 = psllw(local_38,8);
    *(undefined1 (*) [16])(param_1 + 1) = auVar9 | auVar8;
    *param_1 = 1;
  }
  else {
    if (((((auVar9._8_8_ & 1) == 0) && (lVar4 = param_2[1], lVar4 != 0)) &&
        (pcVar5 = (char *)*param_2, *pcVar5 == ':')) && (lVar4 != 1)) {
      cVar1 = pcVar5[1];
      *param_2 = pcVar5 + 2;
      param_2[1] = lVar4 + -2;
      if (cVar1 == ':') {
        uStack_40 = 0;
        local_48 = 0;
        local_42 = 0;
        if (7U - auVar9._0_8_ < 8) {
          uVar7 = read_ipv6_addr::read_groups(param_2,&local_48);
          if (8 < uVar7) goto LAB_00775fbe;
          if (uVar7 != 8) {
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,uVar7 * 2);
            goto LAB_00775ebc;
          }
        }
        else {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__rustc_48a229ceaefd4985c50990b14_007982d0,7);
        }
        (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007982a0,7)
        ;
LAB_00775fbe:
        (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007982b8,8)
        ;
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *param_1 = 0;
    *param_2 = uVar2;
    param_2[1] = uVar3;
  }
  return;
}



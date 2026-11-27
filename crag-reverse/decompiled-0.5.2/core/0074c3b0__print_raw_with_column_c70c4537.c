// 0074c3b0 print_raw_with_column

/* <std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column */

undefined8 __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column
          (longlong *param_1,longlong ****param_2,int *param_3,int *param_4,byte param_5,
          undefined4 param_6,int param_7,undefined4 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 uVar7;
  longlong ****local_b8;
  int *local_b0;
  longlong *local_a8;
  undefined4 local_9c;
  longlong ******local_98;
  undefined *local_90;
  undefined8 ******local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  if ((param_2 == (longlong ****)0x0) && ((char)plVar1[4] == '\0')) {
LAB_0074c3de:
    param_1[1] = lVar2 + 1;
    uVar5 = 0;
  }
  else {
    local_b8 = param_2;
    local_b0 = param_4;
    local_a8 = param_1;
    if (lVar2 == 0) {
      local_88 = (undefined8 ******)(plVar1 + 3);
      pcStack_80 = (code *)PTR_fmt_007991f0;
      cVar4 = (*(code *)PTR_write_007994b0)(&local_88,&DAT_001c05de);
      if (cVar4 == '\0') {
        uVar7 = extraout_XMM0_Da_01;
        if ((char)plVar1[4] == '\x01') {
          local_88 = (undefined8 ******)&local_b8;
          pcStack_80 = <*mut_core[c0acaeba6ab4c2e0]::ffi::c_void_as_core[c0acaeba6ab4c2e0]::fmt::Debug>
                       ::fmt;
          local_78 = 0;
          uStack_70 = CONCAT62(uStack_70._2_6_,0x12);
          cVar4 = (*(code *)PTR_write_007994b0)(&local_88,&DAT_001c05e9);
          uVar7 = extraout_XMM0_Da_02;
          goto joined_r0x0074c4fb;
        }
        goto LAB_0074c501;
      }
    }
    else {
      cVar4 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(param_4,6);
      if (cVar4 == '\0') {
        uVar7 = extraout_XMM0_Da;
        if ((char)plVar1[4] == '\x01') {
          local_88 = (undefined8 ******)&DAT_00183840;
          pcStack_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          local_78 = 0;
          uStack_70 = CONCAT62(uStack_70._2_6_,0x15);
          cVar4 = (*(code *)PTR_write_007994b0)(&local_88,&DAT_00185408);
          uVar7 = extraout_XMM0_Da_00;
joined_r0x0074c4fb:
          if (cVar4 != '\0') goto LAB_0074c613;
        }
LAB_0074c501:
        if (*param_3 == -1) {
          cVar4 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(uVar7,9);
          uVar7 = extraout_XMM0_Da_03;
        }
        else {
          if ((char)plVar1[4] == '\0') {
            local_48 = *(undefined8 *)(param_3 + 0x10);
            uStack_40 = *(undefined8 *)(param_3 + 0x12);
            local_88 = *(undefined8 *******)param_3;
            pcStack_80 = *(code **)(param_3 + 2);
            local_78 = *(undefined8 *)(param_3 + 4);
            uStack_70 = *(undefined8 *)(param_3 + 6);
            local_68 = param_3[8];
            iStack_64 = param_3[9];
            iStack_60 = param_3[10];
            iStack_5c = param_3[0xb];
            local_58 = param_3[0xc];
            iStack_54 = param_3[0xd];
            iStack_50 = param_3[0xe];
            iStack_4c = param_3[0xf];
            puVar6 = (undefined2 *)&DAT_001c05fb;
          }
          else {
            local_48 = *(undefined8 *)(param_3 + 0x10);
            uStack_40 = *(undefined8 *)(param_3 + 0x12);
            local_88 = *(undefined8 *******)param_3;
            pcStack_80 = *(code **)(param_3 + 2);
            local_78 = *(undefined8 *)(param_3 + 4);
            uStack_70 = *(undefined8 *)(param_3 + 6);
            local_68 = param_3[8];
            iStack_64 = param_3[9];
            iStack_60 = param_3[10];
            iStack_5c = param_3[0xb];
            local_58 = param_3[0xc];
            iStack_54 = param_3[0xd];
            iStack_50 = param_3[0xe];
            iStack_4c = param_3[0xf];
            puVar6 = &anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954;
          }
          local_90 = PTR_fmt_0079af68;
          local_98 = (longlong ******)&local_88;
          cVar4 = (*(code *)PTR_write_007994b0)(&local_98,puVar6);
          uVar7 = extraout_XMM0_Da_04;
        }
        if ((cVar4 == '\0') && (cVar4 = (*(code *)PTR_write_str_00799488)(uVar7,1), cVar4 == '\0'))
        {
          param_1 = local_a8;
          if ((param_5 & *local_b0 != 2) != 1) goto LAB_0074c3de;
          uVar7 = extraout_XMM0_Da_05;
          local_9c = param_6;
          if ((char)plVar1[4] == '\x01') {
            local_88 = (undefined8 ******)&DAT_00183840;
            pcStack_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_78 = 0;
            uStack_70 = CONCAT62(uStack_70._2_6_,0x12);
            cVar4 = (*(code *)PTR_write_007994b0)(&local_88,&DAT_00185408);
            uVar7 = extraout_XMM0_Da_06;
            if (cVar4 != '\0') goto LAB_0074c613;
          }
          cVar4 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(uVar7,0x10);
          if (cVar4 == '\0') {
            local_88 = (undefined8 ******)*plVar1;
            pcStack_80 = *(code **)local_b0;
            local_78 = *(undefined8 *)(local_b0 + 2);
            uStack_70 = *(undefined8 *)(local_b0 + 4);
            cVar4 = (**(code **)(plVar1[2] + 0x20))(uStack_70,&pcStack_80);
            puVar3 = PTR_fmt_00799470;
            if (cVar4 == '\0') {
              local_88 = (undefined8 ******)&local_9c;
              pcStack_80 = (code *)PTR_fmt_00799470;
              cVar4 = (*(code *)PTR_write_007994b0)(&local_88,&DAT_0018713f);
              if (cVar4 == '\0') {
                uVar7 = extraout_XMM0_Da_07;
                if (param_7 == 1) {
                  local_98 = (longlong ******)CONCAT44(local_98._4_4_,param_8);
                  local_88 = &local_98;
                  pcStack_80 = (code *)puVar3;
                  cVar4 = (*(code *)PTR_write_007994b0)(&local_88,&DAT_0018713f);
                  uVar7 = extraout_XMM0_Da_08;
                  if (cVar4 != '\0') goto LAB_0074c613;
                }
                cVar4 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(uVar7,1);
                param_1 = local_a8;
                if (cVar4 != '\0') {
                  return 1;
                }
                goto LAB_0074c3de;
              }
            }
          }
        }
      }
    }
LAB_0074c613:
    uVar5 = 1;
  }
  return uVar5;
}



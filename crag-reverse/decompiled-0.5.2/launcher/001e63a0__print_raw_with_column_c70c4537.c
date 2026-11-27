// 001e63a0 print_raw_with_column

/* <std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column */

undefined8 __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column
          (longlong *param_1,longlong ****param_2,int *param_3,int *param_4,byte param_5,
          undefined4 param_6,int param_7,undefined4 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  undefined4 uVar6;
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
LAB_001e63ce:
    param_1[1] = lVar2 + 1;
    uVar4 = 0;
  }
  else {
    local_b8 = param_2;
    local_b0 = param_4;
    local_a8 = param_1;
    if (lVar2 == 0) {
      local_88 = (undefined8 ******)(plVar1 + 3);
      pcStack_80 = (code *)PTR_fmt_00219e40;
      cVar3 = (*(code *)PTR_write_0021a2e0)(&local_88,&DAT_0012e97d);
      if (cVar3 == '\0') {
        uVar6 = extraout_XMM0_Da_01;
        if ((char)plVar1[4] == '\x01') {
          local_88 = (undefined8 ******)&local_b8;
          pcStack_80 = <*mut_core[c0acaeba6ab4c2e0]::ffi::c_void_as_core[c0acaeba6ab4c2e0]::fmt::Debug>
                       ::fmt;
          local_78 = 0;
          uStack_70 = CONCAT62(uStack_70._2_6_,0x12);
          cVar3 = (*(code *)PTR_write_0021a2e0)(&local_88,&DAT_0012e988);
          uVar6 = extraout_XMM0_Da_02;
          goto joined_r0x001e64eb;
        }
        goto LAB_001e64f1;
      }
    }
    else {
      cVar3 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(param_4,6);
      if (cVar3 == '\0') {
        uVar6 = extraout_XMM0_Da;
        if ((char)plVar1[4] == '\x01') {
          local_88 = (undefined8 ******)&DAT_00113d10;
          pcStack_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          local_78 = 0;
          uStack_70 = CONCAT62(uStack_70._2_6_,0x15);
          cVar3 = (*(code *)PTR_write_0021a2e0)(&local_88,&DAT_00114358);
          uVar6 = extraout_XMM0_Da_00;
joined_r0x001e64eb:
          if (cVar3 != '\0') goto LAB_001e6603;
        }
LAB_001e64f1:
        if (*param_3 == -1) {
          cVar3 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(uVar6,9);
          uVar6 = extraout_XMM0_Da_03;
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
            puVar5 = &DAT_0012e99a;
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
            puVar5 = &DAT_00115987;
          }
          local_90 = PTR_fmt_0021a9e8;
          local_98 = (longlong ******)&local_88;
          cVar3 = (*(code *)PTR_write_0021a2e0)(&local_98,puVar5);
          uVar6 = extraout_XMM0_Da_04;
        }
        if ((cVar3 == '\0') && (cVar3 = (*(code *)PTR_write_str_00219e10)(uVar6,1), cVar3 == '\0'))
        {
          param_1 = local_a8;
          if ((param_5 & *local_b0 != 2) != 1) goto LAB_001e63ce;
          uVar6 = extraout_XMM0_Da_05;
          local_9c = param_6;
          if ((char)plVar1[4] == '\x01') {
            local_88 = (undefined8 ******)&DAT_00113d10;
            pcStack_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_78 = 0;
            uStack_70 = CONCAT62(uStack_70._2_6_,0x12);
            cVar3 = (*(code *)PTR_write_0021a2e0)(&local_88,&DAT_00114358);
            uVar6 = extraout_XMM0_Da_06;
            if (cVar3 != '\0') goto LAB_001e6603;
          }
          cVar3 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(uVar6,0x10);
          if (cVar3 == '\0') {
            local_88 = (undefined8 ******)*plVar1;
            pcStack_80 = *(code **)local_b0;
            local_78 = *(undefined8 *)(local_b0 + 2);
            uStack_70 = *(undefined8 *)(local_b0 + 4);
            cVar3 = (**(code **)(plVar1[2] + 0x20))(uStack_70,&pcStack_80);
            puVar5 = PTR_fmt_00219df0;
            if (cVar3 == '\0') {
              local_88 = (undefined8 ******)&local_9c;
              pcStack_80 = (code *)PTR_fmt_00219df0;
              cVar3 = (*(code *)PTR_write_0021a2e0)(&local_88,&DAT_001152d5);
              if (cVar3 == '\0') {
                uVar6 = extraout_XMM0_Da_07;
                if (param_7 == 1) {
                  local_98 = (longlong ******)CONCAT44(local_98._4_4_,param_8);
                  local_88 = &local_98;
                  pcStack_80 = (code *)puVar5;
                  cVar3 = (*(code *)PTR_write_0021a2e0)(&local_88,&DAT_001152d5);
                  uVar6 = extraout_XMM0_Da_08;
                  if (cVar3 != '\0') goto LAB_001e6603;
                }
                cVar3 = (**(code **)(*(longlong *)(*plVar1 + 8) + 0x18))(uVar6,1);
                param_1 = local_a8;
                if (cVar3 != '\0') {
                  return 1;
                }
                goto LAB_001e63ce;
              }
            }
          }
        }
      }
    }
LAB_001e6603:
    uVar4 = 1;
  }
  return uVar4;
}



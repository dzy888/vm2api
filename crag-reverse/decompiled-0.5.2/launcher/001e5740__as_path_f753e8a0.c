// 001e5740 as_path

/* <std[6c98fd8553dbae28]::path::Components>::as_path */

undefined1  [16] __rustcall <std[6c98fd8553dbae28]::path::Components>::as_path(undefined8 *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  char *local_70;
  ulonglong local_68;
  char local_60;
  undefined4 local_5f;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined8 local_4f;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  byte local_38;
  char local_37;
  byte local_36;
  
  pcVar7 = (char *)*param_1;
  local_68 = param_1[1];
  local_60 = *(char *)(param_1 + 2);
  if (local_60 != -1) {
    uStack_98 = (undefined7)((ulonglong)param_1[6] >> 8);
    local_b8 = *(ulonglong *)((longlong)param_1 + 0x11);
    uStack_b0 = *(undefined8 *)((longlong)param_1 + 0x19);
    local_a8 = *(undefined8 *)((longlong)param_1 + 0x21);
    uStack_a0 = (undefined7)*(undefined8 *)((longlong)param_1 + 0x29);
    uStack_99 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x29) >> 0x38);
  }
  local_36 = *(byte *)((longlong)param_1 + 0x3a);
  local_38 = *(byte *)(param_1 + 7);
  local_37 = *(char *)((longlong)param_1 + 0x39);
  local_5f = (undefined4)local_b8;
  uStack_5b = local_b8._4_4_;
  uStack_57 = (undefined4)uStack_b0;
  uStack_53 = uStack_b0._4_4_;
  local_4f = local_a8;
  uStack_47 = uStack_a0;
  uStack_40 = uStack_99;
  uStack_3f = uStack_98;
  local_70 = pcVar7;
  if (local_38 == 2) {
    uVar2 = local_68;
    if (local_68 == 0) {
      uVar2 = 0;
      goto LAB_001e5907;
    }
    do {
      uVar3 = 0;
      do {
        if (local_70[uVar3] == '/') {
          lVar6 = 1;
          lVar4 = 0;
          if (uVar3 == 0) goto LAB_001e5826;
          goto LAB_001e581a;
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
      lVar6 = 0;
      uVar3 = uVar2;
      if (uVar2 == 0) {
        lVar4 = 0;
      }
      else {
LAB_001e581a:
        if ((uVar3 != 1) || (lVar4 = 1, *local_70 != '.')) goto LAB_001e583c;
      }
LAB_001e5826:
      uVar3 = lVar6 + lVar4;
      if (uVar2 < uVar3) goto LAB_001e59e4;
      local_70 = local_70 + uVar3;
      uVar2 = uVar2 - uVar3;
    } while (uVar2 != 0);
    uVar2 = 0;
LAB_001e583c:
    local_68 = uVar2;
  }
  pcVar7 = local_70;
  uVar2 = local_68;
  if (local_37 != '\x02') goto LAB_001e5907;
  uVar3 = (ulonglong)(local_38 < 2 & local_36);
  if (local_38 < 2) {
    if (local_36 == 0) {
      if (local_68 == 0) goto joined_r0x001e5972;
      while( true ) {
        if (local_68 == 1) {
          if (*pcVar7 != '.') goto joined_r0x001e5972;
        }
        else {
          if (*pcVar7 != '.') goto joined_r0x001e5972;
          if (pcVar7[1] != '/') goto joined_r0x001e5972;
        }
        uVar2 = local_68;
        if (local_68 < 2) break;
        while( true ) {
          uVar2 = local_68;
          parse_next_component_back(&local_b8,&local_70);
          if ((char)uStack_b0 != -1) goto LAB_001e5907;
          uVar3 = uVar2 - local_b8;
          if (uVar2 < local_b8) goto LAB_001e59d2;
          local_68 = uVar3;
          if (uVar3 != 0) break;
joined_r0x001e5972:
          uVar2 = local_68;
          if (local_68 == 0) goto LAB_001e5907;
        }
      }
      goto LAB_001e5907;
    }
    if (local_68 <= uVar3) goto LAB_001e5907;
    do {
      uVar2 = local_68;
      parse_next_component_back(&local_b8,&local_70);
      if ((char)uStack_b0 != -1) goto LAB_001e5907;
      uVar5 = uVar2 - local_b8;
      if (uVar2 < local_b8) {
LAB_001e59d2:
        (*(code *)PTR_slice_index_fail_00219d80)
                  (&PTR_s__rustc_48a229ceaefd4985c50990b14_00217b70,uVar2);
        pcVar7 = local_70;
LAB_001e59e4:
        local_70 = pcVar7;
        (*(code *)PTR_slice_index_fail_00219d80)
                  (&PTR_s__rustc_48a229ceaefd4985c50990b14_00217bb8,uVar2);
        pcVar1 = (code *)swi(3);
        auVar9._0_8_ = (*pcVar1)();
        auVar9._8_8_ = uVar2;
        return auVar9;
      }
      local_68 = uVar5;
    } while (uVar3 < uVar5);
  }
  else {
    if (local_68 <= uVar3) goto LAB_001e5907;
    do {
      uVar2 = local_68;
      parse_next_component_back(&local_b8,&local_70);
      if ((char)uStack_b0 != -1) goto LAB_001e5907;
      uVar5 = uVar2 - local_b8;
      if (uVar2 < local_b8) goto LAB_001e59d2;
      local_68 = uVar5;
    } while (uVar3 < uVar5);
  }
  uVar2 = uVar5;
LAB_001e5907:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = pcVar7;
  return auVar8;
}



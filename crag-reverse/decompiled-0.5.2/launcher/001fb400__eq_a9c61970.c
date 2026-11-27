// 001fb400 eq

/* <std[6c98fd8553dbae28]::path::Components as core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq */

bool __rustcall
<std[6c98fd8553dbae28]::path::Components_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  char local_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined7 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  undefined4 local_9f;
  undefined4 uStack_9b;
  undefined4 uStack_97;
  undefined4 uStack_93;
  undefined4 local_8f;
  undefined4 uStack_8b;
  undefined4 uStack_87;
  undefined4 uStack_83;
  undefined7 uStack_7f;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  undefined8 local_5f;
  undefined8 uStack_57;
  undefined8 local_4f;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  
  lVar1 = param_1[1];
  lVar2 = param_2[1];
  if (lVar1 == lVar2) {
    uVar6 = *param_1;
    if ((((*(char *)(param_1 + 7) == *(char *)(param_2 + 7)) &&
         (*(char *)((longlong)param_1 + 0x39) == '\x02')) &&
        (*(char *)((longlong)param_2 + 0x39) == '\x02')) &&
       (iVar5 = (*(code *)PTR_bcmp_00219d38)(param_4,lVar1), iVar5 == 0)) {
      return true;
    }
  }
  else {
    uVar6 = *param_1;
  }
  local_60 = *(char *)(param_1 + 2);
  if (local_60 != -1) {
    uStack_b8 = (undefined7)((ulonglong)param_1[6] >> 8);
    local_d8 = *(undefined8 *)((longlong)param_1 + 0x11);
    uStack_d0 = *(undefined8 *)((longlong)param_1 + 0x19);
    local_c8 = *(undefined8 *)((longlong)param_1 + 0x21);
    uStack_c0 = (undefined7)*(undefined8 *)((longlong)param_1 + 0x29);
    uStack_b9 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x29) >> 0x38);
  }
  local_36 = *(undefined1 *)((longlong)param_1 + 0x3a);
  local_38 = *(undefined1 *)(param_1 + 7);
  local_37 = *(undefined1 *)((longlong)param_1 + 0x39);
  local_b0 = *param_2;
  local_a0 = *(char *)(param_2 + 2);
  if (local_a0 != -1) {
    uStack_e8 = (undefined7)((ulonglong)param_2[6] >> 8);
    local_108 = *(undefined8 *)((longlong)param_2 + 0x11);
    uStack_100 = *(undefined8 *)((longlong)param_2 + 0x19);
    local_f8 = *(undefined8 *)((longlong)param_2 + 0x21);
    uStack_f0 = (undefined4)*(undefined8 *)((longlong)param_2 + 0x29);
    uStack_ec = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x29) >> 0x20);
  }
  local_76 = *(undefined1 *)((longlong)param_2 + 0x3a);
  local_78 = *(undefined2 *)(param_2 + 7);
  local_5f = local_d8;
  uStack_57 = uStack_d0;
  local_4f = local_c8;
  uStack_47 = uStack_c0;
  uStack_40 = uStack_b9;
  uStack_3f = uStack_b8;
  local_9f = (undefined4)local_108;
  uStack_9b = local_108._4_4_;
  uStack_97 = (undefined4)uStack_100;
  uStack_93 = uStack_100._4_4_;
  local_8f = (undefined4)local_f8;
  uStack_8b = local_f8._4_4_;
  uStack_87 = uStack_f0;
  uStack_83 = uStack_ec;
  uStack_7f = uStack_e8;
  local_a8 = lVar2;
  local_70 = uVar6;
  local_68 = lVar1;
  (*(code *)PTR_next_back_0021a718)();
  puVar3 = PTR_next_back_0021a718;
  if (local_140 != -1) {
    do {
      (*(code *)puVar3)();
      if ((char)local_178 == -1) {
        return false;
      }
      local_1b8 = local_110;
      local_1e8[0] = local_140;
      local_1c8 = local_120;
      uStack_1c0 = uStack_118;
      local_1d8 = local_130;
      uStack_1d0 = uStack_128;
      uStack_1e0 = uStack_138;
      local_180 = local_148;
      local_190 = local_158;
      uStack_18c = uStack_154;
      uStack_188 = uStack_150;
      uStack_184 = uStack_14c;
      local_1a0 = local_168;
      uStack_19c = uStack_164;
      uStack_198 = uStack_160;
      uStack_194 = uStack_15c;
      local_1b0 = local_178;
      uStack_1ac = uStack_174;
      uStack_1a8 = uStack_170;
      uStack_1a4 = uStack_16c;
      cVar4 = <std[6c98fd8553dbae28]::path::Component_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq
                        (local_1e8,&local_1b0);
      if (cVar4 == '\0') {
        return false;
      }
      (*(code *)puVar3)();
    } while (local_140 != -1);
  }
  (*(code *)PTR_next_back_0021a718)();
  return local_1e8[0] == -1;
}



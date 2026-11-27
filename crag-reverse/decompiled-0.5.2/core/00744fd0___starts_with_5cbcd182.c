// 00744fd0 _starts_with

/* <std[6c98fd8553dbae28]::path::Path>::_starts_with */

bool __rustcall <std[6c98fd8553dbae28]::path::Path>::_starts_with(char *param_1,longlong param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  char local_178;
  char local_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined1 local_d0 [56];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  char *local_70;
  longlong local_68;
  char local_60;
  undefined4 local_5f;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 local_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined1 local_37;
  char local_36;
  
  puVar1 = PTR_next_00799f18;
  if (param_2 == 0) {
    cVar3 = false;
  }
  else {
    cVar3 = *param_1 == '/';
  }
  local_60 = -1;
  local_38 = 1;
  local_37 = 2;
  do {
    uStack_3f = uStack_e8;
    local_4f = (undefined4)local_f8;
    uStack_4b = local_f8._4_4_;
    uStack_47 = uStack_f0;
    uStack_43 = uStack_ec;
    local_5f = (undefined4)local_108;
    uStack_5b = local_108._4_4_;
    uStack_57 = (undefined4)uStack_100;
    uStack_53 = uStack_100._4_4_;
    local_70 = param_1;
    local_68 = param_2;
    local_36 = cVar3;
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    local_108 = CONCAT71(uStack_13f,local_140);
    uStack_e8 = (undefined7)local_120;
    uStack_e1 = (undefined1)((ulonglong)local_120 >> 0x38);
    local_f8 = local_130;
    uStack_f0 = (undefined4)uStack_128;
    uStack_ec = (undefined4)((ulonglong)uStack_128 >> 0x20);
    uStack_100 = uStack_138;
    if (local_140 == -1) {
      cVar2 = '\x02';
      if (local_178 == -1) {
        cVar2 = cVar3;
      }
      cVar3 = cVar2;
LAB_007451a8:
      return cVar3 != '\x02';
    }
    if (local_178 == -1) goto LAB_007451a8;
    cVar3 = <std[6c98fd8553dbae28]::path::Component_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq
                      (&local_108,local_d0);
    if (cVar3 == '\0') {
      cVar3 = '\x02';
      goto LAB_007451a8;
    }
    local_98 = CONCAT44(uStack_5b,local_5f);
    uStack_90 = CONCAT44(uStack_53,uStack_57);
    local_88 = CONCAT44(uStack_4b,local_4f);
    uStack_80 = (undefined7)CONCAT44(uStack_43,uStack_47);
    uStack_79 = uStack_43._3_1_;
    uStack_78 = uStack_3f;
    param_2 = local_68;
    param_1 = local_70;
    cVar3 = local_36;
    if (local_60 != -1) {
      uStack_f0 = uStack_47;
      uStack_ec = (undefined4)(CONCAT17(uStack_43._3_1_,uStack_80) >> 0x20);
      local_108 = local_98;
      uStack_100 = uStack_90;
      local_f8 = local_88;
      uStack_e8 = uStack_78;
    }
  } while( true );
}



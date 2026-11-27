// 0050bdd0 default_http_reason_phrase

/* craggemini_core[66f3c71560d70857]::protocol::default_http_reason_phrase */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::protocol::default_http_reason_phrase(undefined2 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  pcVar1 = "Upstream";
  uVar2 = 0xe;
  switch(param_1) {
  case 400:
    auVar3._8_8_ = 0xb;
    auVar3._0_8_ = "Bad Request";
    return auVar3;
  case 0x191:
    auVar12._8_8_ = 0xc;
    auVar12._0_8_ = "Unauthorized";
    return auVar12;
  case 0x193:
    auVar11._8_8_ = 9;
    auVar11._0_8_ = "Forbidden";
    return auVar11;
  case 0x194:
    auVar10._8_8_ = 9;
    auVar10._0_8_ = "Not Found";
    return auVar10;
  case 0x198:
    auVar6._8_8_ = 0xf;
    auVar6._0_8_ = "Request Timeout";
    return auVar6;
  case 0x199:
    auVar8._8_8_ = 8;
    auVar8._0_8_ = &DAT_00185500;
    return auVar8;
  case 0x19d:
    auVar13._8_8_ = 0x11;
    auVar13._0_8_ = "Payload Too Large";
    return auVar13;
  case 0x1a6:
    auVar14._8_8_ = 0x14;
    auVar14._0_8_ = "Unprocessable Entity";
    return auVar14;
  case 0x1ad:
    auVar16._8_8_ = 0x11;
    auVar16._0_8_ = "Too Many Requests";
    return auVar16;
  case 500:
    auVar15._8_8_ = 0x15;
    auVar15._0_8_ = "Internal Server Error";
    return auVar15;
  case 0x1f6:
    auVar5._8_8_ = 0xb;
    auVar5._0_8_ = "Bad Gateway";
    return auVar5;
  case 0x1f7:
    auVar9._8_8_ = 0x13;
    auVar9._0_8_ = "Service Unavailable";
    return auVar9;
  case 0x1f8:
    auVar7._8_8_ = 0xf;
    auVar7._0_8_ = "Gateway Timeout";
    return auVar7;
  case 0x211:
    pcVar1 = "Overloaded";
    uVar2 = 10;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = pcVar1;
  return auVar4;
}



// 0039a160 <<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::process_payload::{closure#7}>

/* WARNING: Type propagation algorithm not settling */
/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::retain::<<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::process_payload::{closure#7}>
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::retain::
<<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::process_payload::_closure_7_>
          (undefined4 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  
  puVar7 = PTR_index_into_00799300;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (uVar1 == 0) {
    return;
  }
  puVar2 = *(undefined4 **)(param_2 + 8);
  uVar9 = 0;
  puVar12 = puVar2;
  do {
    pcVar8 = (char *)(*(code *)puVar7)(param_1,puVar12);
    bVar10 = 1;
    if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\x01')) {
      bVar10 = pcVar8[1] ^ 1;
    }
    uVar11 = 0x10;
    pcVar8 = (char *)(*(code *)puVar7)(extraout_XMM0_Da,puVar12);
    param_1 = extraout_XMM0_Da_00;
    if (pcVar8 == (char *)0x0) {
      uVar11 = 0x11;
      pcVar8 = (char *)(*(code *)puVar7)(extraout_XMM0_Da_00,puVar12);
      param_1 = extraout_XMM0_Da_01;
      if (pcVar8 != (char *)0x0) goto LAB_0039a215;
LAB_0039a1b0:
      if (bVar10 == 0) {
LAB_0039a227:
        uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(puVar12,uVar11);
        uVar6 = uVar9;
        break;
      }
    }
    else {
LAB_0039a215:
      if (*pcVar8 != '\x03') goto LAB_0039a1b0;
      if (bVar10 == 0 && *(longlong *)(pcVar8 + 0x18) == 0) goto LAB_0039a227;
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 8;
    if (uVar1 == uVar9) {
      return;
    }
  } while( true );
joined_r0x0039a23c:
  uVar6 = uVar6 + 1;
  if (uVar1 <= uVar6) {
    *(ulonglong *)(param_2 + 0x10) = uVar9;
    return;
  }
  puVar13 = puVar12 + 8;
  pcVar8 = (char *)(*(code *)puVar7)(uVar14,puVar13);
  bVar10 = 1;
  if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\x01')) {
    bVar10 = pcVar8[1] ^ 1;
  }
  uVar11 = 0x10;
  pcVar8 = (char *)(*(code *)puVar7)(extraout_XMM0_Da_02,puVar13);
  if (pcVar8 != (char *)0x0) {
LAB_0039a2cc:
    if (*pcVar8 != '\x03') goto LAB_0039a2e4;
    if (bVar10 != 0 || *(longlong *)(pcVar8 + 0x18) != 0) goto LAB_0039a248;
LAB_0039a2ef:
    uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                       (puVar13,uVar11);
    puVar12 = puVar13;
    goto joined_r0x0039a23c;
  }
  uVar11 = 0x11;
  pcVar8 = (char *)(*(code *)puVar7)(extraout_XMM0_Da_03,puVar13);
  if (pcVar8 != (char *)0x0) goto LAB_0039a2cc;
LAB_0039a2e4:
  if (bVar10 == 0) goto LAB_0039a2ef;
LAB_0039a248:
  uVar14 = *puVar13;
  uVar3 = puVar12[9];
  uVar4 = puVar12[10];
  uVar5 = puVar12[0xb];
  uVar11 = *(undefined8 *)(puVar12 + 0xe);
  *(undefined8 *)(puVar2 + uVar9 * 8 + 4) = *(undefined8 *)(puVar12 + 0xc);
  *(undefined8 *)((longlong)(puVar2 + uVar9 * 8 + 4) + 8) = uVar11;
  puVar12 = puVar2 + uVar9 * 8;
  *puVar12 = uVar14;
  puVar12[1] = uVar3;
  puVar12[2] = uVar4;
  puVar12[3] = uVar5;
  uVar9 = uVar9 + 1;
  puVar12 = puVar13;
  goto joined_r0x0039a23c;
}



// 006a05b0 render_non_streaming_json_with_ids

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x006a08fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::multiprotocol::render_non_streaming_json_with_ids */

longlong __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::render_non_streaming_json_with_ids
          (longlong param_1)

{
  byte bVar1;
  code *pcVar2;
  longlong lVar3;
  undefined2 extraout_DX;
  ulonglong uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined8 in_stack_00000030;
  longlong in_stack_00000038;
  byte *in_stack_00000040;
  undefined1 local_138 [16];
  longlong lStack_128;
  undefined8 *puStack_120;
  code *pcStack_118;
  longlong *plStack_110;
  code *pcStack_108;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  longlong alStack_b8 [2];
  longlong lStack_a8;
  longlong lStack_a0;
  char *pcStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 *puStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  bVar1 = *in_stack_00000040;
  if (bVar1 == 0) {
    tools::aggregate_sse_to_json(param_1);
    return param_1;
  }
  collect_sse_frames(local_138);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    render_gemini_json(param_1,local_138,in_stack_00000040[1]);
    break;
  case 2:
    render_openai_chat_json
              (param_1,local_138,*(undefined8 *)(in_stack_00000040 + 0x10),
               *(undefined8 *)(in_stack_00000040 + 0x18),in_stack_00000040[1],in_stack_00000030,
               in_stack_00000038);
    break;
  case 3:
    render_openai_responses_json
              (param_1,local_138,*(undefined8 *)(in_stack_00000040 + 0x10),
               *(undefined8 *)(in_stack_00000040 + 0x18),in_stack_00000040[1],in_stack_00000040[2],
               in_stack_00000030,in_stack_00000038);
    break;
  case 4:
    render_anthropic_json
              (param_1,local_138,*(undefined8 *)(in_stack_00000040 + 0x10),
               *(undefined8 *)(in_stack_00000040 + 0x18),in_stack_00000040[1],in_stack_00000040[2],
               in_stack_00000030,in_stack_00000038);
    break;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x006a08b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)((longlong)&switchD_006a08b2::switchdataD_001a47b0 +
                      (longlong)(int)(&switchD_006a08b2::switchdataD_001a47b0)[param_1]))
                      ((code *)((longlong)&switchD_006a08b2::switchdataD_001a47b0 +
                               (longlong)(int)(&switchD_006a08b2::switchdataD_001a47b0)[param_1]));
    return lVar3;
  case 6:
switchD_006a0611_caseD_6:
LAB_006a09dd:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  case 7:
    switchD_006a0611::switchdataD_001a47a0._0_1_ =
         (char)switchD_006a0611::switchdataD_001a47a0 + -0x60;
    lStack_128 = in_stack_00000038;
    uStack_c8 = _DAT_007916b0;
    uStack_c0 = _UNK_007916b8;
    puStack_d8 = PTR_s_native_bridge_disconnected_007916a0;
    uStack_d0 = _UNK_007916a8;
    lStack_e8 = _DAT_00791690;
    uStack_e0 = _UNK_00791698;
    uStack_f8 = _DAT_00791680;
    uStack_f4 = _UNK_00791684;
    uStack_f0 = (char *)CONCAT44(_UNK_0079168c,_UNK_00791688);
    if (lStack_a8 == 0) {
      pcStack_70 = "native bridge disconnected";
      uStack_68 = 0x1a;
      uVar4 = 0x1f6;
      puStack_78 = (undefined8 *)0xffffffffffffffff;
      pcStack_98 = "bridge_disconnected";
      lStack_90 = 0x13;
    }
    else {
      puStack_120 = &uStack_e0;
      pcStack_118 = <alloc[12e961f32105355]::borrow::Cow<str>as_core[c0acaeba6ab4c2e0]::fmt::Display>
                    ::fmt;
      plStack_110 = alStack_b8;
      pcStack_108 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                    ::fmt;
      (*(code *)PTR_format_inner_00799048)
                ((longlong)&switchD_006a0611::switchdataD_001a47a0 +
                 (longlong)(int)(&switchD_006a0611::switchdataD_001a47a0)[bVar1 - 1],&puStack_120);
      lVar3 = lStack_e8;
      uVar4 = uStack_c0 & 0xffff;
      pcStack_98 = uStack_f0;
      lStack_90 = lStack_e8;
      if (CONCAT44(uStack_f4,uStack_f8) != -1) {
        if (-1 < lStack_e8) {
          if (lStack_e8 == 0) {
            pcStack_98 = (char *)0x1;
          }
          else {
            uStack_fc = (uint)(ushort)uStack_c0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcStack_98 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcStack_98 == (char *)0x0) goto LAB_006a09dd;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar3);
            uVar4 = (ulonglong)uStack_fc;
          }
          lStack_a0 = lVar3;
          lStack_90 = lVar3;
          goto LAB_006a0ae7;
        }
        goto switchD_006a0611_caseD_6;
      }
    }
    lStack_a0 = -1;
LAB_006a0ae7:
    puStack_120 = puStack_78;
    pcStack_118 = (code *)pcStack_70;
    plStack_110 = (longlong *)uStack_68;
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
    <alloc[12e961f32105355]::borrow::Cow<str>,alloc[12e961f32105355]::borrow::Cow<str>>
              (lStack_88,uVar4,&lStack_a0,&puStack_120);
    lVar3 = lStack_128;
    *(undefined1 *)(lStack_88 + 0x3b) = 5;
    uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::protocol::Failure>(&uStack_f8);
    if (alStack_b8[0] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
    }
    if ((1 < (int)param_1 - 2U) && (param_1 != 0)) {
      uStack_f0 = (char *)(lVar3 + -1);
      uStack_f8 = CONCAT31(uStack_f8._1_3_,3);
      (*(code *)PTR_drop_00799040)();
    }
    return lStack_88;
  case 8:
    _UNK_001a4761 = _UNK_001a4761 + -1;
    out(extraout_DX,0x1a47a0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::multiprotocol::CollectedTurn>(local_138);
  return param_1;
}



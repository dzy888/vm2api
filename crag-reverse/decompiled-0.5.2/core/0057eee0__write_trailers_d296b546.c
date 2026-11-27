// 0057eee0 write_trailers

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::write_trailers */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::write_trailers(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *local_e8;
  undefined *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x246) != '\x01') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
              (param_2);
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x1b8);
  uVar3 = *(longlong *)(param_1 + 0x1b8) + 0x7ffffffffffffffe;
  if (uVar3 == 1 || 3 < uVar3) {
    local_98 = param_2[10];
    uStack_90 = param_2[0xb];
    local_a8 = param_2[8];
    uStack_a0 = param_2[9];
    local_e8 = (longlong *)*param_2;
    puStack_e0 = (undefined *)param_2[1];
    local_d8 = *(undefined4 *)(param_2 + 2);
    uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_d0 = *(undefined4 *)(param_2 + 3);
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_c8 = *(undefined4 *)(param_2 + 4);
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_c0 = *(undefined4 *)(param_2 + 5);
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_b8 = *(undefined4 *)(param_2 + 6);
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_b0 = *(undefined4 *)(param_2 + 7);
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x3c);
    <hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::encode_trailers::
    <bytes[e9829e187354639b]::bytes::Bytes>
              (local_80,plVar1,&local_e8,*(undefined1 *)(param_1 + 0x243));
    if (local_80[0] != -1) {
      local_a8 = local_40;
      uStack_a0 = uStack_38;
      local_b8 = local_50;
      uStack_b4 = uStack_4c;
      uStack_b0 = uStack_48;
      uStack_ac = uStack_44;
      local_c8 = local_60;
      uStack_c4 = uStack_5c;
      uStack_c0 = uStack_58;
      uStack_bc = uStack_54;
      local_d8 = local_70;
      uStack_d4 = uStack_6c;
      uStack_d0 = uStack_68;
      uStack_cc = uStack_64;
      uVar7 = <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
              ::buffer::
              <hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
                        (param_1 + 0x30,&local_e8);
      lVar4 = *(longlong *)(param_1 + 0x1b8);
      lVar5 = -0x7ffffffffffffffc;
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        lVar5 = -0x7ffffffffffffffb;
      }
      if (lVar4 == -0x7fffffffffffffff) {
        lVar5 = -0x7ffffffffffffffb;
      }
      if (((lVar4 + 0x7ffffffffffffffaU < 0xfffffffffffffffc) && (-0x7fffffffffffffff < lVar4)) &&
         (lVar4 != -1)) {
        if (*(longlong *)(param_1 + 0x1c8) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x1c0) + 0x38;
          lVar4 = 1 - *(longlong *)(param_1 + 0x1c8);
          do {
            if (*(longlong *)(lVar6 + -0x38) != 0) {
              uVar7 = (**(code **)(*(longlong *)(lVar6 + -0x38) + 0x20))
                                (uVar7,*(undefined8 *)(lVar6 + -0x28));
            }
            lVar6 = lVar6 + 0x20;
            lVar4 = lVar4 + 1;
          } while (lVar4 != 1);
          lVar4 = *plVar1;
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
        }
      }
      *plVar1 = lVar5;
    }
    return;
  }
  puStack_e0 = PTR_fmt_00799dd8;
  local_e8 = plVar1;
  (*(code *)PTR_panic_fmt_007991a8)
            (3 < uVar3,&anon_92c4c5dab1af02541b6de8b875afdfcf_56_llvm_8405253652347736786);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



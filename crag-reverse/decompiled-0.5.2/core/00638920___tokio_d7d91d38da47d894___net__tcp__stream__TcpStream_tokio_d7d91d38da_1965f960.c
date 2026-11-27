// 00638920 <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>

/* WARNING: Type propagation algorithm not settling */
/* <tokio[d7d91d38da47d894]::io::util::copy::CopyBuffer>::poll_copy::<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,
   tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream> */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::io::util::copy::CopyBuffer>::poll_copy::
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>
          (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong extraout_RDX;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong in_FS_OFFSET;
  undefined1 auVar15 [16];
  
  uVar9 = 0xfffffffffffffec8;
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
LAB_00638952:
    cVar4 = *(char *)(in_FS_OFFSET + -0xf3);
    if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
      if (cVar4 == '\0') {
        (*(code *)PTR_register_waker_00799e58)();
        (*(code *)PTR_drop_00799e50)();
        uVar14 = 2;
        goto LAB_00638c08;
      }
      cVar4 = cVar4 + -1;
    }
    *(char *)(in_FS_OFFSET + -0xf3) = cVar4;
    (*(code *)PTR_drop_00799e50)();
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    goto LAB_00638952;
  }
  puVar1 = (ulonglong *)(param_1 + 2);
  uVar12 = param_1[3];
  bVar5 = *(byte *)(param_1 + 5);
  uVar10 = uVar9;
  do {
    if ((uVar12 < (ulonglong)param_1[1]) && ((bVar5 & 1) == 0)) {
      auVar15 = poll_fill_buf::<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>
                          (param_1,param_2,param_3);
      uVar9 = auVar15._8_8_;
      if (auVar15._0_8_ == 1) {
        uVar12 = param_1[3];
        if (param_1[2] != uVar12) goto LAB_006389e4;
        uVar9 = uVar10;
        if (*(char *)((longlong)param_1 + 0x29) == '\x01') {
          *(undefined1 *)((longlong)param_1 + 0x29) = 0;
        }
LAB_00638bf5:
        uVar14 = 2;
        goto LAB_00638bfd;
      }
      if (uVar9 != 0) {
LAB_00638bf7:
        uVar14 = 1;
        goto LAB_00638bfd;
      }
      uVar12 = param_1[3];
      uVar13 = *puVar1;
      if (uVar13 < uVar12) goto LAB_006389f0;
    }
    else {
LAB_006389e4:
      uVar13 = *puVar1;
      uVar9 = uVar10;
      if (uVar13 < uVar12) {
LAB_006389f0:
        uVar10 = param_1[1];
        if (uVar10 < uVar12) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__vendor_tokio_1_54_1_src_io_util_0078f8d0,uVar10);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar2 = *param_1;
        lVar8 = param_1[4];
        do {
          while (uVar9 = lVar2 + uVar13, lVar6 = (*(code *)PTR_poll_write_0079a078)(uVar12 - uVar13)
                , lVar6 != 0) {
            if (lVar6 == 2) {
              uVar14 = 2;
              if ((uVar10 <= uVar12) || ((char)param_1[5] != '\0')) goto LAB_00638bf5;
              bVar5 = poll_fill_buf::<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>
                                (param_1,param_2,param_3);
              uVar9 = extraout_RDX;
              if (extraout_RDX == 0 || (bVar5 & 1) != 0) goto LAB_00638bfd;
              goto LAB_00638bf7;
            }
            uVar11 = (uint)uVar9 & 3;
            switch(uVar11) {
            case 0:
              cVar4 = *(char *)(uVar9 + 0x10);
              break;
            case 1:
              cVar4 = *(char *)(uVar9 + 0x1f);
              break;
            case 2:
              lVar7 = (*(code *)PTR_get_os_functions_007992e0)();
              cVar4 = (**(code **)(lVar7 + 8))();
              break;
            case 3:
              cVar4 = (char)(uVar9 >> 0x20);
            }
            if (cVar4 != '#') {
              if (lVar6 != 2) goto LAB_00638bf7;
              goto LAB_00638bf5;
            }
            if ((1 < uVar11 - 2) && ((uVar9 & 3) != 0)) {
              (*(code *)PTR_drop_00799040)();
            }
          }
          if (uVar9 == 0) {
            uVar9 = (*(code *)PTR_<&str>_007991e8)(lVar8,0x1b);
            uVar14 = 1;
            goto LAB_00638bfd;
          }
          uVar13 = uVar13 + uVar9;
          param_1[2] = uVar13;
          lVar8 = lVar8 + uVar9;
          param_1[4] = lVar8;
          *(undefined1 *)((longlong)param_1 + 0x29) = 1;
        } while (uVar13 < uVar12);
      }
    }
    *puVar1 = 0;
    param_1[3] = 0;
    bVar5 = 0;
    uVar12 = 0;
    uVar10 = uVar9;
  } while ((char)param_1[5] == '\0');
  uVar9 = param_1[4];
  uVar14 = 0;
LAB_00638bfd:
  (*(code *)PTR_drop_00799e50)();
LAB_00638c08:
  auVar15._8_8_ = uVar9;
  auVar15._0_8_ = uVar14;
  return auVar15;
}



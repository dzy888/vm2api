// 000841a0 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* gimli[a7f20a324fd82d99]::read::unit::parse_attribute::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
gimli[a7f20a324fd82d99]::read::unit::parse_attribute::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (undefined8 *param_1,longlong *param_2,ulonglong param_3,undefined8 *param_4,
          undefined8 param_5,word *param_6)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  char *pcVar14;
  byte *pbVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  byte *pbVar20;
  byte *pbVar21;
  char local_50;
  undefined4 local_4f;
  undefined3 uStack_4b;
  byte *local_48;
  longlong *local_40;
  char *local_38;
  
  uVar10 = (uint)param_3;
  cVar3 = (char)(param_3 >> 8);
  uVar1 = *(ushort *)((longlong)param_4 + 10);
  uVar16 = (ulonglong)uVar1;
  uVar12 = (uint)uVar1;
  local_38 = (char *)*param_2;
  pbVar15 = (byte *)param_2[1];
  plVar13 = param_2;
code_r0x000841ee:
  uVar2 = (ushort)(param_3 >> 0x10);
  uVar8 = (uint)((ulonglong)local_38 >> 8);
  uVar6 = (uint)((ulonglong)local_38 >> 0x10);
  local_40 = param_2;
  switch(uVar12) {
  case 1:
    goto switchD_000841fb_caseD_1;
  case 2:
    goto switchD_000841fb_caseD_2;
  case 3:
    if (pbVar15 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_00084ad9;
    pbVar15 = pbVar15 + -2;
    local_48 = (byte *)(local_38 + 2);
    *param_2 = (longlong)local_48;
    param_2[1] = (longlong)pbVar15;
    param_6 = (word *)(ulonglong)*(ushort *)local_38;
LAB_00084aa1:
    local_38 = (char *)local_48;
    if (param_6 <= pbVar15) {
      *param_2 = (longlong)(local_48 + (longlong)param_6);
      param_2[1] = (longlong)pbVar15 - (longlong)param_6;
      goto LAB_00084ab1;
    }
    goto LAB_00084ad9;
  case 4:
    if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pbVar15) {
      pbVar15 = pbVar15 + -4;
      local_48 = (byte *)(local_38 + 4);
      *param_2 = (longlong)local_48;
      param_2[1] = (longlong)pbVar15;
      param_6 = (word *)(ulonglong)*(uint *)local_38;
      goto LAB_00084aa1;
    }
    goto LAB_00084ad9;
  case 5:
    if (pbVar15 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_00084956;
    *param_2 = (longlong)(local_38 + 2);
    param_2[1] = (longlong)(pbVar15 + -2);
    local_48 = (byte *)(ulonglong)*(ushort *)local_38;
    uVar8 = (uint)(*(ushort *)local_38 >> 8);
    uVar18 = 3;
    break;
  case 6:
    if ((uVar10 & 0xff00) == 0x400) {
      switch(*(undefined2 *)(param_4 + 1)) {
      case 2:
      case 0x10:
      case 0x19:
      case 0x2a:
      case 0x2c:
      case 0x40:
      case 0x43:
      case 0x46:
      case 0x48:
      case 0x4a:
      case 0x4d:
      case 0x55:
      case 0x79:
switchD_00084a47_caseD_2:
        if (&Elf64_Ehdr_00000000.e_ident_class <= pbVar15) {
          *param_2 = (longlong)(local_38 + 4);
          param_2[1] = (longlong)(pbVar15 + -4);
          uVar6 = *(uint *)local_38;
          local_48 = (byte *)(ulonglong)uVar6;
          uVar8 = uVar6 >> 8;
          uVar6 = uVar6 >> 0x10;
          uVar18 = 10;
          goto LAB_00084e80;
        }
        goto LAB_000855b9;
      case 0x38:
        if ((uVar2 & 0xfffe) == 2) goto switchD_00084a47_caseD_2;
      }
    }
    if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_class) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined1 *)((longlong)param_1 + 0xb) = 0;
      *(undefined2 *)((longlong)param_1 + 9) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_000855ce;
    }
    *param_2 = (longlong)(local_38 + 4);
    param_2[1] = (longlong)(pbVar15 + -4);
    uVar6 = *(uint *)local_38;
    local_48 = (byte *)(ulonglong)uVar6;
    uVar8 = uVar6 >> 8;
    uVar6 = uVar6 >> 0x10;
    uVar18 = 4;
    goto LAB_00084e80;
  case 7:
    if ((uVar10 & 0xff00) == 0x800) {
      switch(*(undefined2 *)(param_4 + 1)) {
      case 2:
      case 0x10:
      case 0x19:
      case 0x2a:
      case 0x2c:
      case 0x40:
      case 0x43:
      case 0x46:
      case 0x48:
      case 0x4a:
      case 0x4d:
      case 0x55:
      case 0x79:
switchD_00084bb2_caseD_2:
        if (&Elf64_Ehdr_00000000.e_ident_osabi < pbVar15) goto LAB_00084bca;
        goto LAB_000855b9;
      case 0x38:
        if ((uVar2 & 0xfffe) == 2) goto switchD_00084bb2_caseD_2;
      }
    }
    if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_abiversion) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 8);
    param_2[1] = (longlong)(pbVar15 + -8);
    uVar6 = *(uint *)local_38;
    local_48 = (byte *)(ulonglong)uVar6;
    uVar8 = uVar6 >> 8;
    uVar6 = uVar6 >> 0x10;
    uVar16 = (ulonglong)*(uint3 *)(local_38 + 4) << 0x20 | (ulonglong)(byte)local_38[7] << 0x38;
    uVar18 = 5;
    goto LAB_00084e83;
  case 8:
    if (pbVar15 == (byte *)0x0) goto LAB_00084845;
    param_6 = (word *)0x0;
    pbVar20 = (byte *)local_38;
    goto LAB_00084830;
  case 9:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f7f;
    pbVar20 = (byte *)0x0;
    param_6 = (word *)0x0;
    iVar9 = 0;
    goto LAB_000849d6;
  case 10:
    if (pbVar15 != (byte *)0x0) {
      pbVar15 = pbVar15 + -1;
      local_48 = (byte *)(local_38 + 1);
      *param_2 = (longlong)local_48;
      param_2[1] = (longlong)pbVar15;
      param_6 = (word *)(ulonglong)(byte)*local_38;
      goto LAB_00084aa1;
    }
LAB_00084ad9:
    param_1[1] = 0x13;
    param_1[2] = local_38;
    goto LAB_000855d6;
  case 0xb:
    if (pbVar15 == (byte *)0x0) {
LAB_00084f67:
      *(undefined2 *)(param_1 + 1) = 0x13;
      *(undefined2 *)((longlong)param_1 + 0xe) = 0;
      *(undefined4 *)((longlong)param_1 + 10) = 0;
      goto LAB_000855ce;
    }
    *param_2 = (longlong)(local_38 + 1);
    param_2[1] = (longlong)(pbVar15 + -1);
    local_48 = (byte *)(ulonglong)(byte)*local_38;
    uVar18 = 2;
    uVar8 = 0;
    break;
  case 0xc:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f67;
    *param_2 = (longlong)(local_38 + 1);
    param_2[1] = (longlong)(pbVar15 + -1);
    local_48 = (byte *)(ulonglong)(*local_38 != 0);
    uVar18 = 9;
    uVar8 = 0;
    break;
  case 0xd:
    param_6 = (word *)(local_38 + 1);
    iVar9 = 0;
    uVar16 = 0;
    goto LAB_000847e1;
  case 0xe:
    if (cVar3 == '\b') {
      if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_abiversion) goto LAB_000850f9;
      *param_2 = (longlong)(local_38 + 8);
      param_2[1] = (longlong)(pbVar15 + -8);
      local_48 = (byte *)(((ulonglong)*(uint *)local_38 << 8 |
                          (ulonglong)*(uint3 *)(local_38 + 4) << 0x28) >> 8 |
                         (ulonglong)(byte)local_38[7] << 0x38);
    }
    else {
      if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_class) goto LAB_000850f9;
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      local_48 = (byte *)(ulonglong)*(uint *)local_38;
    }
    uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
    uVar6 = (uint)((ulonglong)local_48 >> 0x10);
    uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
    uVar18 = 0x1a;
    goto LAB_00084e83;
  case 0xf:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f1c;
    param_6 = (word *)(local_38 + (longlong)pbVar15);
    lVar19 = 1 - (longlong)pbVar15;
    local_48 = (byte *)0x0;
    iVar9 = 0;
    pbVar20 = (byte *)local_38;
    goto LAB_00084d67;
  case 0x10:
    if (((uint)(param_3 >> 0x10) & 0xffff) == 2) {
      <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>as_gimli[a7f20a324fd82d99]::read::reader::Reader>
      ::read_sized_offset(&local_50,param_2,param_3 & 0xff);
    }
    else {
      <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>as_gimli[a7f20a324fd82d99]::read::reader::Reader>
      ::read_offset(&local_50,param_2,param_3 >> 8 & 0xff);
    }
    if (local_50 == -1) {
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0xe;
      goto LAB_00084e83;
    }
    *(uint *)((longlong)param_1 + 0xc) = CONCAT31(uStack_4b,local_4f._3_1_);
    *(undefined4 *)((longlong)param_1 + 9) = local_4f;
    *(char *)(param_1 + 1) = local_50;
    param_1[2] = local_48;
    goto LAB_000855d6;
  case 0x11:
    if (pbVar15 == (byte *)0x0) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 1);
    param_2[1] = (longlong)(pbVar15 + -1);
    local_48 = (byte *)(ulonglong)(byte)*local_38;
    uVar18 = 0xd;
    uVar8 = 0;
    break;
  case 0x12:
    if (pbVar15 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 2);
    param_2[1] = (longlong)(pbVar15 + -2);
    local_48 = (byte *)(ulonglong)*(ushort *)local_38;
    uVar8 = (uint)(*(ushort *)local_38 >> 8);
    uVar18 = 0xd;
    break;
  case 0x13:
    if (&Elf64_Ehdr_00000000.e_ident_class <= pbVar15) {
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      uVar6 = *(uint *)local_38;
      local_48 = (byte *)(ulonglong)uVar6;
      uVar8 = uVar6 >> 8;
      uVar6 = uVar6 >> 0x10;
      uVar18 = 0xd;
      goto LAB_00084e80;
    }
    goto LAB_000855b9;
  case 0x14:
    if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_abiversion) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 8);
    param_2[1] = (longlong)(pbVar15 + -8);
    local_48 = (byte *)(((ulonglong)*(uint *)local_38 << 8 |
                        (ulonglong)*(uint3 *)(local_38 + 4) << 0x28) >> 8 |
                       (ulonglong)(byte)local_38[7] << 0x38);
    goto LAB_00085312;
  case 0x15:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f1c;
    param_6 = (word *)(local_38 + (longlong)pbVar15);
    lVar19 = 1 - (longlong)pbVar15;
    local_48 = (byte *)0x0;
    iVar9 = 0;
    pbVar20 = (byte *)local_38;
    goto LAB_000848dc;
  case 0x16:
    if (pbVar15 == (byte *)0x0) {
      uVar5 = 0x13;
      uVar17 = 0;
      uVar11 = 0;
LAB_00085404:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *(undefined1 *)((longlong)param_1 + 9) = 0;
      *(undefined2 *)((longlong)param_1 + 10) = uVar17;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar11;
      param_1[2] = local_38;
      goto LAB_000855d6;
    }
    pbVar20 = pbVar15 + -1;
    pbVar21 = (byte *)(local_38 + 1);
    *param_2 = (longlong)pbVar21;
    param_2[1] = (longlong)pbVar20;
    bVar4 = *local_38;
    if ((char)bVar4 < '\0') {
      if (pbVar20 == (byte *)0x0) {
        uVar5 = 0x13;
        uVar17 = 0;
        uVar11 = 0;
        local_38 = (char *)pbVar21;
      }
      else {
        pbVar20 = pbVar15 + -2;
        pbVar21 = (byte *)(local_38 + 2);
        *param_2 = (longlong)pbVar21;
        param_2[1] = (longlong)pbVar20;
        uVar12 = ((byte)local_38[1] & 0x7f) << 7;
        if (-1 < local_38[1]) {
          uVar16 = (ulonglong)(bVar4 & 0x7f | uVar12);
          goto LAB_000842ba;
        }
        if (pbVar20 == (byte *)0x0) {
          uVar5 = 0x13;
          param_6 = (word *)0x0;
          uVar11 = 0;
        }
        else {
          pbVar20 = pbVar15 + -3;
          pbVar21 = (byte *)(local_38 + 3);
          *param_2 = (longlong)pbVar21;
          param_2[1] = (longlong)pbVar20;
          if ((byte)local_38[2] < 4) {
            uVar12 = bVar4 & 0x7f | uVar12 | (uint)(ushort)(byte)local_38[2] << 0xe;
            plVar13 = (longlong *)(ulonglong)uVar12;
            uVar16 = (ulonglong)(ushort)uVar12;
            goto LAB_000842ba;
          }
          uVar11 = (undefined4)((ulonglong)param_6 >> 0x10);
          uVar5 = 6;
        }
        uVar17 = SUB82(param_6,0);
        local_38 = (char *)pbVar21;
      }
      goto LAB_00085404;
    }
    uVar16 = (ulonglong)bVar4;
LAB_000842ba:
    param_6 = (word *)((ulonglong)param_6 & 0xffffffffffff0000 | uVar16);
    uVar12 = (uint)uVar16;
    local_38 = (char *)pbVar21;
    pbVar15 = pbVar20;
    goto code_r0x000841ee;
  case 0x17:
    if (cVar3 == '\b') {
      if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_abiversion) goto LAB_000850f9;
LAB_00084bca:
      *param_2 = (longlong)(local_38 + 8);
      param_2[1] = (longlong)(pbVar15 + -8);
      local_48 = (byte *)(((ulonglong)*(uint *)local_38 << 8 |
                          (ulonglong)*(uint3 *)(local_38 + 4) << 0x28) >> 8 |
                         (ulonglong)(byte)local_38[7] << 0x38);
    }
    else {
      if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_class) goto LAB_000850f9;
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      local_48 = (byte *)(ulonglong)*(uint *)local_38;
    }
    uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
    uVar6 = (uint)((ulonglong)local_48 >> 0x10);
    uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
    uVar18 = 10;
    goto LAB_00084e83;
  case 0x18:
    if (pbVar15 == (byte *)0x0) {
LAB_00084f7f:
      local_48 = (byte *)local_38;
      goto LAB_00084f83;
    }
    pbVar20 = (byte *)0x0;
    param_6 = (word *)0x0;
    iVar9 = 0;
    goto LAB_00084b07;
  case 0x19:
    uVar18 = 9;
    uVar8 = 0;
    local_48 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
    break;
  case 0x1a:
switchD_000841fb_caseD_1a:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f1c;
    param_6 = (word *)(local_38 + (longlong)pbVar15);
    lVar19 = 1 - (longlong)pbVar15;
    local_48 = (byte *)0x0;
    iVar9 = 0;
    pbVar20 = (byte *)local_38;
    goto LAB_000843f0;
  case 0x1b:
switchD_000841fb_caseD_1b:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f1c;
    param_6 = (word *)(local_38 + (longlong)pbVar15);
    lVar19 = 1 - (longlong)pbVar15;
    local_48 = (byte *)0x0;
    iVar9 = 0;
    pbVar20 = (byte *)local_38;
    goto LAB_00084330;
  case 0x1c:
    if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pbVar15) {
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      uVar6 = *(uint *)local_38;
      local_48 = (byte *)(ulonglong)uVar6;
      uVar8 = uVar6 >> 8;
      uVar6 = uVar6 >> 0x10;
      uVar18 = 0xf;
      goto LAB_00084e80;
    }
    goto LAB_000855b9;
  case 0x1d:
switchD_000841fb_caseD_1d:
    if (cVar3 != '\b') {
      if (pbVar15 <= Elf64_Ehdr_00000000.e_ident_magic_str + 2) goto LAB_000850f9;
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      local_48 = (byte *)(ulonglong)*(uint *)local_38;
LAB_0008447d:
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0x1b;
      goto LAB_00084e83;
    }
    if (&Elf64_Ehdr_00000000.e_ident_osabi < pbVar15) {
      *param_2 = (longlong)(local_38 + 8);
      param_2[1] = (longlong)(pbVar15 + -8);
      local_48 = (byte *)(((ulonglong)*(uint *)local_38 << 8 |
                          (ulonglong)*(uint3 *)(local_38 + 4) << 0x28) >> 8 |
                         (ulonglong)(byte)local_38[7] << 0x38);
      goto LAB_0008447d;
    }
    goto LAB_000850f9;
  case 0x1e:
    if (pbVar15 < &Elf64_Ehdr_00000000.e_type) {
LAB_00084956:
      param_1[1] = 0x13;
      goto LAB_000855ce;
    }
    *param_2 = (longlong)(local_38 + 0x10);
    param_2[1] = (longlong)(pbVar15 + -0x10);
    uVar8 = uVar8 & 0xffffff;
    uVar16 = (ulonglong)local_38 & 0xffffffff00000000;
    uVar18 = 1;
    param_6 = &Elf64_Ehdr_00000000.e_type;
    local_48 = (byte *)local_38;
    goto LAB_00084e83;
  case 0x1f:
    if (cVar3 == '\b') {
      if (&Elf64_Ehdr_00000000.e_ident_abiversion <= pbVar15) {
        *param_2 = (longlong)(local_38 + 8);
        param_2[1] = (longlong)(pbVar15 + -8);
        local_48 = (byte *)(((ulonglong)*(uint *)local_38 << 8 |
                            (ulonglong)*(uint3 *)(local_38 + 4) << 0x28) >> 8 |
                           (ulonglong)(byte)local_38[7] << 0x38);
        goto LAB_000850d5;
      }
    }
    else if (&Elf64_Ehdr_00000000.e_ident_class <= pbVar15) {
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      local_48 = (byte *)(ulonglong)*(uint *)local_38;
LAB_000850d5:
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0x1e;
      goto LAB_00084e83;
    }
LAB_000850f9:
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((longlong)param_1 + 0xf) = 0;
    *(undefined2 *)((longlong)param_1 + 0xd) = 0;
    *(undefined4 *)((longlong)param_1 + 9) = 0;
    param_1[2] = local_38;
    goto LAB_000855d6;
  case 0x20:
    if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_abiversion) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 8);
    param_2[1] = (longlong)(pbVar15 + -8);
    uVar12 = *(uint *)local_38;
    uVar8 = uVar12 >> 8;
    uVar6 = uVar12 >> 0x10;
    uVar16 = (ulonglong)*(uint3 *)(local_38 + 4) << 0x20 | (ulonglong)(byte)local_38[7] << 0x38;
    uVar18 = 0x19;
    local_48 = (byte *)(ulonglong)uVar12;
    goto LAB_00084e83;
  case 0x21:
    if (uVar1 != 0x21) {
      *(undefined1 *)(param_1 + 1) = 0x49;
      goto LAB_000855d6;
    }
    local_48 = (byte *)*param_4;
    goto LAB_0008518d;
  case 0x22:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f1c;
    param_6 = (word *)(local_38 + (longlong)pbVar15);
    lVar19 = 1 - (longlong)pbVar15;
    local_48 = (byte *)0x0;
    iVar9 = 0;
    pbVar20 = (byte *)local_38;
    goto LAB_00084ed3;
  case 0x23:
    if (pbVar15 == (byte *)0x0) goto LAB_00084f1c;
    param_6 = (word *)(local_38 + (longlong)pbVar15);
    lVar19 = 1 - (longlong)pbVar15;
    local_48 = (byte *)0x0;
    iVar9 = 0;
    pbVar20 = (byte *)local_38;
    goto LAB_000845de;
  case 0x24:
    if (pbVar15 < &Elf64_Ehdr_00000000.e_ident_abiversion) goto LAB_000855b9;
LAB_000846de:
    *param_2 = (longlong)(local_38 + 8);
    param_2[1] = (longlong)(pbVar15 + -8);
    local_48 = (byte *)(((ulonglong)*(uint *)local_38 << 8 |
                        (ulonglong)*(uint3 *)(local_38 + 4) << 0x28) >> 8 |
                       (ulonglong)(byte)local_38[7] << 0x38);
LAB_00084fba:
    uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
    uVar6 = (uint)((ulonglong)local_48 >> 0x10);
    uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
    uVar18 = 0xf;
    goto LAB_00084e83;
  case 0x25:
    if (pbVar15 == (byte *)0x0) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 1);
    param_2[1] = (longlong)(pbVar15 + -1);
    local_48 = (byte *)(ulonglong)(byte)*local_38;
    uVar18 = 0x1d;
    uVar8 = 0;
    break;
  case 0x26:
    if (pbVar15 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 2);
    param_2[1] = (longlong)(pbVar15 + -2);
    local_48 = (byte *)(ulonglong)*(ushort *)local_38;
    uVar8 = (uint)(*(ushort *)local_38 >> 8);
    uVar18 = 0x1d;
    break;
  case 0x27:
    if (Elf64_Ehdr_00000000.e_ident_magic_str + 1 < pbVar15) {
      *param_2 = (longlong)(local_38 + 3);
      param_2[1] = (longlong)(pbVar15 + -3);
      local_48 = (byte *)(ulonglong)*(ushort *)local_38;
      uVar6 = (uint)(byte)local_38[2];
      uVar8 = (uint)(*(uint3 *)local_38 >> 8);
      uVar18 = 0x1d;
      goto LAB_00084e80;
    }
    goto LAB_000855b9;
  case 0x28:
    if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pbVar15) {
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      uVar6 = *(uint *)local_38;
      local_48 = (byte *)(ulonglong)uVar6;
      uVar8 = uVar6 >> 8;
      uVar6 = uVar6 >> 0x10;
      uVar18 = 0x1d;
      goto LAB_00084e80;
    }
    goto LAB_000855b9;
  case 0x29:
    if (pbVar15 == (byte *)0x0) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 1);
    param_2[1] = (longlong)(pbVar15 + -1);
    local_48 = (byte *)(ulonglong)(byte)*local_38;
    uVar18 = 0xc;
    uVar8 = 0;
    break;
  case 0x2a:
    if (pbVar15 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_000855b9;
    *param_2 = (longlong)(local_38 + 2);
    param_2[1] = (longlong)(pbVar15 + -2);
    local_48 = (byte *)(ulonglong)*(ushort *)local_38;
    uVar8 = (uint)(*(ushort *)local_38 >> 8);
    uVar18 = 0xc;
    break;
  case 0x2b:
    if (Elf64_Ehdr_00000000.e_ident_magic_str + 1 < pbVar15) {
      *param_2 = (longlong)(local_38 + 3);
      param_2[1] = (longlong)(pbVar15 + -3);
      local_48 = (byte *)(ulonglong)*(ushort *)local_38;
      uVar6 = (uint)(byte)local_38[2];
      uVar8 = (uint)(*(uint3 *)local_38 >> 8);
      uVar18 = 0xc;
      goto LAB_00084e80;
    }
    goto LAB_000855b9;
  case 0x2c:
    if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pbVar15) {
      *param_2 = (longlong)(local_38 + 4);
      param_2[1] = (longlong)(pbVar15 + -4);
      uVar6 = *(uint *)local_38;
      local_48 = (byte *)(ulonglong)uVar6;
      uVar8 = uVar6 >> 8;
      uVar6 = uVar6 >> 0x10;
      uVar18 = 0xc;
      goto LAB_00084e80;
    }
LAB_000855b9:
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((longlong)param_1 + 0xf) = 0;
    *(undefined2 *)((longlong)param_1 + 0xd) = 0;
    *(undefined4 *)((longlong)param_1 + 9) = 0;
LAB_000855ce:
    param_1[2] = local_38;
    goto LAB_000855d6;
  default:
    switch((int)uVar16) {
    case 0x1f01:
      goto switchD_000841fb_caseD_1b;
    case 0x1f02:
      goto switchD_000841fb_caseD_1a;
    case 0x1f20:
      if (cVar3 == '\b') {
        if (&Elf64_Ehdr_00000000.e_ident_osabi < pbVar15) goto LAB_000846de;
      }
      else if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pbVar15) {
        *param_2 = (longlong)(local_38 + 4);
        param_2[1] = (longlong)(pbVar15 + -4);
        local_48 = (byte *)(ulonglong)*(uint *)local_38;
        goto LAB_00084fba;
      }
      goto LAB_000850f9;
    case 0x1f21:
      goto switchD_000841fb_caseD_1d;
    }
switchD_000841fb_caseD_2:
    *(undefined1 *)(param_1 + 1) = 0xc;
    *(short *)((longlong)param_1 + 10) = (short)uVar16;
    goto LAB_000855d6;
  }
  uVar6 = 0;
LAB_00084e80:
  uVar16 = 0;
  goto LAB_00084e83;
  while( true ) {
    iVar9 = iVar9 + 7;
    lVar19 = lVar19 + 1;
    pbVar20 = (byte *)pcVar14;
    if (lVar19 == 1) break;
LAB_000845de:
    pcVar14 = (char *)(pbVar20 + 1);
    bVar4 = *pbVar20;
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_00084f20;
    local_48 = (byte *)((ulonglong)local_48 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      *param_2 = (longlong)pcVar14;
      param_2[1] = -lVar19;
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0x18;
      goto LAB_00084e83;
    }
  }
  goto LAB_00084f0b;
  while( true ) {
    iVar9 = iVar9 + 7;
    lVar19 = lVar19 + 1;
    pbVar20 = (byte *)pcVar14;
    if (lVar19 == 1) break;
LAB_00084ed3:
    pcVar14 = (char *)(pbVar20 + 1);
    bVar4 = *pbVar20;
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_00084f20;
    local_48 = (byte *)((ulonglong)local_48 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      *param_2 = (longlong)pcVar14;
      param_2[1] = -lVar19;
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0x13;
      goto LAB_00084e83;
    }
  }
  goto LAB_00084f0b;
  while( true ) {
    iVar9 = iVar9 + 7;
    lVar19 = lVar19 + 1;
    pbVar20 = (byte *)pcVar14;
    if (lVar19 == 1) break;
LAB_00084330:
    pcVar14 = (char *)(pbVar20 + 1);
    bVar4 = *pbVar20;
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_00084f20;
    local_48 = (byte *)((ulonglong)local_48 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      *param_2 = (longlong)pcVar14;
      param_2[1] = -lVar19;
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0xc;
      goto LAB_00084e83;
    }
  }
  goto LAB_00084f0b;
  while( true ) {
    iVar9 = iVar9 + 7;
    lVar19 = lVar19 + 1;
    pbVar20 = (byte *)pcVar14;
    if (lVar19 == 1) break;
LAB_000843f0:
    pcVar14 = (char *)(pbVar20 + 1);
    bVar4 = *pbVar20;
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_00084f20;
    local_48 = (byte *)((ulonglong)local_48 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      *param_2 = (longlong)pcVar14;
      param_2[1] = -lVar19;
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0x1d;
      goto LAB_00084e83;
    }
  }
  goto LAB_00084f0b;
  while( true ) {
    iVar9 = iVar9 + 7;
    pbVar20 = pbVar20 + 1;
    if (pbVar15 == pbVar20) break;
LAB_00084b07:
    bVar4 = local_38[(longlong)pbVar20];
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_000851b1;
    param_6 = (word *)((ulonglong)param_6 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      local_48 = (byte *)(local_38 + (longlong)pbVar20 + 1);
      *param_2 = (longlong)local_48;
      param_2[1] = (longlong)(pbVar15 + ~(ulonglong)pbVar20);
      if (pbVar15 + ~(ulonglong)pbVar20 < param_6) goto LAB_00084f83;
      *param_2 = (longlong)(local_38 + (longlong)(pbVar20 + (longlong)param_6) + 1);
      param_2[1] = (longlong)(pbVar15 + (~(ulonglong)pbVar20 - (longlong)param_6));
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 8;
      goto LAB_00084e83;
    }
  }
  goto LAB_00084b3f;
LAB_000848dc:
  do {
    pcVar14 = (char *)(pbVar20 + 1);
    bVar4 = *pbVar20;
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_00084f20;
    local_48 = (byte *)((ulonglong)local_48 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      *param_2 = (longlong)pcVar14;
      param_2[1] = -lVar19;
LAB_00085312:
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 0xd;
      goto LAB_00084e83;
    }
    iVar9 = iVar9 + 7;
    lVar19 = lVar19 + 1;
    pbVar20 = (byte *)pcVar14;
  } while (lVar19 != 1);
  goto LAB_00084f0b;
LAB_00084f20:
  local_38 = local_38 + (longlong)pbVar15;
  *param_2 = (longlong)pcVar14;
  param_2[1] = -lVar19;
  uVar5 = 6;
  goto LAB_00084f2c;
  while( true ) {
    iVar9 = iVar9 + 7;
    pbVar20 = pbVar20 + 1;
    if (pbVar15 == pbVar20) break;
LAB_000849d6:
    bVar4 = local_38[(longlong)pbVar20];
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_000851b1;
    param_6 = (word *)((ulonglong)param_6 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      local_48 = (byte *)(local_38 + (longlong)pbVar20 + 1);
      *param_2 = (longlong)local_48;
      param_2[1] = (longlong)(pbVar15 + ~(ulonglong)pbVar20);
      if (param_6 <= pbVar15 + ~(ulonglong)pbVar20) {
        *param_2 = (longlong)(local_38 + (longlong)(pbVar20 + (longlong)param_6) + 1);
        param_2[1] = (longlong)(pbVar15 + (~(ulonglong)pbVar20 - (longlong)param_6));
LAB_00084ab1:
        uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
        uVar6 = (uint)((ulonglong)local_48 >> 0x10);
        uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
        uVar18 = 1;
        goto LAB_00084e83;
      }
      goto LAB_00084f83;
    }
  }
LAB_00084b3f:
  *param_2 = (longlong)(local_38 + (longlong)pbVar15);
  param_2[1] = 0;
  local_48 = (byte *)(local_38 + (longlong)pbVar15);
LAB_00084f83:
  uVar18 = 0x13;
LAB_000851ca:
  param_1[1] = uVar18;
  param_1[2] = local_48;
  goto LAB_000855d6;
LAB_000851b1:
  local_48 = (byte *)(local_38 + (longlong)pbVar15);
  *param_2 = (longlong)(local_38 + (longlong)pbVar20 + 1);
  param_2[1] = (longlong)(pbVar15 + ~(ulonglong)pbVar20);
  uVar18 = 6;
  goto LAB_000851ca;
  while( true ) {
    param_6 = (word *)((longlong)param_6 + 1);
    pbVar20 = pbVar20 + 1;
    if ((word *)pbVar15 == param_6) break;
LAB_00084830:
    if (*pbVar20 == 0) {
      *param_2 = (longlong)(pbVar20 + 1);
      param_2[1] = (longlong)(pbVar15 + ~(ulonglong)param_6);
      uVar8 = uVar8 & 0xffffff;
      uVar16 = (ulonglong)local_38 & 0xffffffff00000000;
      uVar18 = 0x1f;
      local_48 = (byte *)((ulonglong)local_38 & 0xffffffff);
      goto LAB_00084e83;
    }
  }
LAB_00084845:
  param_1[1] = 0x13;
  param_1[2] = local_38;
  goto LAB_000855d6;
switchD_000841fb_caseD_1:
  bVar4 = (byte)param_3 - 1;
  if (bVar4 < (byte)((byte)param_3 ^ bVar4)) {
    uVar12 = 0;
    for (uVar6 = uVar10 & 0xff; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    if ((byte)uVar12 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00084990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)&DAT_00014a94 + (longlong)(int)(&DAT_00014a94)[uVar12]))
                ((code *)((longlong)&DAT_00014a94 + (longlong)(int)(&DAT_00014a94)[uVar12]));
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0x19;
  *(uint *)((longlong)param_1 + 9) = uVar10 & 0xff;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  param_1[2] = plVar13;
  goto LAB_000855d6;
  while( true ) {
    *param_2 = (longlong)param_6;
    param_2[1] = (longlong)pbVar15;
    bVar4 = *(byte *)((longlong)param_6 + -1);
    uVar12 = (uint)bVar4;
    if (((iVar9 == 0x3f) && (uVar12 != 0x7f)) && (uVar12 != 0)) {
      uVar5 = 7;
      goto LAB_00085152;
    }
    uVar16 = uVar16 | (ulonglong)(uVar12 & 0x7f) << ((byte)iVar9 & 0x3f);
    iVar9 = iVar9 + 7;
    local_38 = local_38 + 1;
    param_6 = (word *)((longlong)param_6 + 1);
    if (-1 < (char)bVar4) break;
LAB_000847e1:
    pbVar15 = pbVar15 + -1;
    if (pbVar15 == (byte *)0xffffffffffffffff) {
      uVar5 = 0x13;
LAB_00085152:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *(undefined1 *)((longlong)param_1 + 9) = 0;
      *(undefined2 *)((longlong)param_1 + 0xe) = 0;
      *(undefined4 *)((longlong)param_1 + 10) = 0;
      param_1[2] = local_38;
      goto LAB_000855d6;
    }
  }
  uVar7 = -1L << ((byte)iVar9 & 0x3f);
  if (bVar4 < 0x40) {
    uVar7 = 0;
  }
  if (0x3f < iVar9) {
    uVar7 = 0;
  }
  local_48 = (byte *)(uVar16 | uVar7);
LAB_0008518d:
  uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
  uVar6 = (uint)((ulonglong)local_48 >> 0x10);
  uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
  uVar18 = 6;
LAB_00084e83:
  uVar17 = *(undefined2 *)(param_4 + 1);
  *param_1 = uVar18;
  param_1[1] = ((uint)local_48 & 0xff | (uVar8 & 0xff) << 8 | uVar6 << 0x10) | uVar16;
  param_1[2] = param_6;
  *(undefined2 *)(param_1 + 3) = uVar17;
  return;
  while( true ) {
    iVar9 = iVar9 + 7;
    lVar19 = lVar19 + 1;
    pbVar20 = (byte *)pcVar14;
    if (lVar19 == 1) break;
LAB_00084d67:
    pcVar14 = (char *)(pbVar20 + 1);
    bVar4 = *pbVar20;
    if ((iVar9 == 0x3f) && (1 < bVar4)) goto LAB_00084f20;
    local_48 = (byte *)((ulonglong)local_48 | (ulonglong)(bVar4 & 0x7f) << ((byte)iVar9 & 0x3f));
    if (-1 < (char)bVar4) {
      *param_2 = (longlong)pcVar14;
      param_2[1] = -lVar19;
      uVar8 = (uint)((ulonglong)local_48 >> 8) & 0xffffff;
      uVar6 = (uint)((ulonglong)local_48 >> 0x10);
      uVar16 = (ulonglong)local_48 & 0xffffffff00000000;
      uVar18 = 7;
      goto LAB_00084e83;
    }
  }
LAB_00084f0b:
  local_38 = local_38 + (longlong)pbVar15;
  *param_2 = (longlong)local_38;
  param_2[1] = 0;
LAB_00084f1c:
  uVar5 = 0x13;
LAB_00084f2c:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  param_1[2] = local_38;
LAB_000855d6:
  *param_1 = 0xffffffffffffffff;
  return;
}



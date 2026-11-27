// 006be590 parse_with_config_and_uninit_headers

/* <httparse[622c0e90ae307373]::Request>::parse_with_config_and_uninit_headers */

void __rustcall
<httparse[622c0e90ae307373]::Request>::parse_with_config_and_uninit_headers
          (undefined8 *param_1,undefined8 *param_2,uint *param_3,longlong param_4,longlong param_5,
          undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  uint *puVar11;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  uint *local_78;
  uint *local_70;
  uint *local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_38 = param_7;
  local_70 = (uint *)((longlong)param_3 + param_4);
  uVar8 = 1;
  if (param_4 != 0) {
    do {
      while( true ) {
        bVar1 = (byte)*param_3;
        uVar5 = (uint)bVar1;
        if (bVar1 == 10) break;
        if (bVar1 != 0xd) {
          if (3 < (ulonglong)((longlong)local_70 - (longlong)param_3)) {
            uVar5 = *param_3;
            uVar4 = uVar5 >> 0x18;
            cVar10 = (char)(uVar5 >> 8);
            cVar7 = (char)(uVar5 >> 0x10);
            if ((char)uVar5 == 'G') {
              uVar5 = 0x47;
              if (((uVar4 == 0x20) && (cVar10 == 'E')) && (cVar7 == 'T')) {
                local_68 = param_3 + 1;
                lVar9 = 3;
                goto LAB_006be749;
              }
            }
            else if (((((uVar5 & 0xff) == 0x50) && (uVar5 = 0x50, uVar4 == 0x54)) &&
                     ((cVar10 == 'O' && ((cVar7 == 'S' && (param_3 + 1 < local_70)))))) &&
                    ((byte)param_3[1] == 0x20)) {
              local_68 = (uint *)((longlong)param_3 + 5);
              lVar9 = 4;
              goto LAB_006be749;
            }
          }
          uVar8 = 1;
          if (param_3 < local_70) {
            if ((0x19 < (byte)((char)uVar5 + 0xbfU)) &&
               (PTR_TOKEN_MAP_0079a508[uVar5 & 0xff] != '\x01')) goto LAB_006be716;
            puVar6 = (uint *)((longlong)param_3 + 1);
            if (puVar6 < local_70) {
              lVar9 = 0;
              goto LAB_006be6fb;
            }
          }
          goto LAB_006be71f;
        }
        if (local_70 <= (uint *)((longlong)param_3 + 1U)) goto LAB_006be71f;
        if (*(byte *)((longlong)param_3 + 1) != 10) {
          *(undefined1 *)(param_1 + 1) = 2;
          goto LAB_006be67e;
        }
        param_3 = (uint *)((longlong)param_3 + 2);
        if (local_70 <= param_3) goto LAB_006be71f;
      }
      param_3 = (uint *)((longlong)param_3 + 1);
    } while (param_3 < local_70);
  }
  goto LAB_006be71f;
LAB_006be716:
  *(undefined1 *)(param_1 + 1) = 4;
LAB_006be67e:
  uVar8 = 2;
  goto LAB_006be71f;
  while( true ) {
    puVar6 = (uint *)((longlong)puVar6 + 1);
    lVar9 = lVar9 + -1;
    if (puVar6 == local_70) break;
LAB_006be6fb:
    bVar1 = (byte)*puVar6;
    if ((ulonglong)bVar1 == 0x20) {
      local_68 = (uint *)((longlong)param_3 + (2 - lVar9));
      lVar9 = 1 - lVar9;
LAB_006be749:
      param_2[2] = param_3;
      param_2[3] = lVar9;
      cVar7 = *(char *)(param_5 + 2);
      if (cVar7 == '\x01') {
        while( true ) {
          if (local_70 <= local_68) {
            *param_1 = 1;
            return;
          }
          if ((byte)*local_68 != 0x20) break;
          local_68 = (uint *)((longlong)local_68 + 1);
        }
      }
      local_78 = local_68;
      local_48 = param_4;
      local_40 = param_6;
      (*(code *)PTR_match_uri_vectored_0079a510)();
      puVar6 = local_70;
      uVar8 = 1;
      if (local_70 <= local_68) goto LAB_006be7fb;
      puVar11 = (uint *)((longlong)local_68 + 1);
      if ((local_68 != local_78) && ((byte)*local_68 == 0x20)) {
        lVar9 = (longlong)local_68 - (longlong)local_78;
        local_78 = puVar11;
        local_68 = puVar11;
        (*(code *)PTR_from_utf8_00799468)(0x20,lVar9);
        if (local_60 != 1) {
          *(undefined4 *)(param_2 + 4) = local_58;
          *(undefined4 *)((longlong)param_2 + 0x24) = uStack_54;
          *(undefined4 *)(param_2 + 5) = uStack_50;
          *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_4c;
          if (cVar7 != '\0') {
            if (puVar6 <= puVar11) goto LAB_006be91a;
            while ((byte)*puVar11 == 0x20) {
              puVar11 = (uint *)((longlong)puVar11 + 1);
              if (puVar11 == puVar6) goto LAB_006be91a;
            }
            local_78 = puVar11;
            local_68 = puVar11;
          }
          uVar2 = httparse[622c0e90ae307373]::parse_version(&local_78);
          puVar6 = local_70;
          uVar3 = (undefined1)(uVar2 >> 8);
          if ((char)uVar2 == '\x02') {
            *(undefined1 *)(param_1 + 1) = uVar3;
            uVar8 = 2;
LAB_006be868:
            *param_1 = uVar8;
            return;
          }
          uVar8 = 1;
          if ((uVar2 & 1) != 0) goto LAB_006be868;
          *(undefined1 *)(param_2 + 6) = 1;
          *(undefined1 *)((longlong)param_2 + 0x31) = uVar3;
          if (local_70 <= local_68) {
LAB_006be91a:
            *param_1 = 1;
            return;
          }
          puVar11 = (uint *)((longlong)local_68 + 1U);
          if ((byte)*local_68 == 10) {
LAB_006be8cc:
            local_68 = puVar11;
            puVar11 = local_68;
            local_7a = *(undefined1 *)(param_5 + 4);
            local_79 = *(undefined1 *)(param_5 + 6);
            local_7c = 0;
            local_78 = local_68;
            httparse[622c0e90ae307373]::parse_headers_iter_uninit
                      (&local_60,&local_40,&local_78,&local_7c);
            if (CONCAT44(uStack_5c,local_60) != 2) {
              uVar8 = 1;
              if ((local_60 & 1) == 0) {
                *param_2 = local_40;
                param_2[1] = uStack_38;
                *param_1 = 0;
                param_1[1] = (byte *)((longlong)puVar11 +
                                     CONCAT44(uStack_54,local_58) + (local_48 - (longlong)puVar6));
                return;
              }
              goto LAB_006be975;
            }
            *(undefined1 *)(param_1 + 1) = (undefined1)local_58;
          }
          else {
            if ((byte)*local_68 != 0xd) {
              *(undefined1 *)(param_1 + 1) = 2;
              *param_1 = 2;
              return;
            }
            uVar8 = 1;
            if (local_70 <= (uint *)((longlong)local_68 + 1U)) goto LAB_006be975;
            puVar11 = (uint *)((longlong)local_68 + 2);
            if (*(byte *)((longlong)local_68 + 1) == 10) goto LAB_006be8cc;
            *(undefined1 *)(param_1 + 1) = 2;
          }
          uVar8 = 2;
LAB_006be975:
          *param_1 = uVar8;
          return;
        }
      }
      *(undefined1 *)(param_1 + 1) = 4;
      uVar8 = 2;
LAB_006be7fb:
      *param_1 = uVar8;
      return;
    }
    if ((0x19 < (byte)(bVar1 + 0xbf)) && (PTR_TOKEN_MAP_0079a508[bVar1] != '\x01'))
    goto LAB_006be716;
  }
LAB_006be71f:
  *param_1 = uVar8;
  return;
}



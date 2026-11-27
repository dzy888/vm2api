// 006280d0 route_error_protocol

/* craggemini_core[66f3c71560d70857]::server::route_error_protocol */

void __rustcall
craggemini_core[66f3c71560d70857]::server::route_error_protocol
          (undefined1 *param_1,longlong *param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char local_28;
  undefined7 uStack_27;
  
  if (param_3 < 0xf) {
    if (param_3 < 0xb) {
      if (param_3 == 10) {
        if ((short)param_2[1] != 0x7365 || *param_2 != 0x736e6f707365722f) goto LAB_00628226;
        goto LAB_006281f8;
      }
      if (param_3 < 9) {
        *param_1 = 0;
        return;
      }
      goto LAB_00628226;
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 7) == 0x2f736c65646f6d2f && *param_2 == 0x2f6174656231762f
       ) {
      param_1[1] = 0;
      *param_1 = 1;
      return;
    }
    if (0x10 < param_3) {
      pcVar1 = (char *)((longlong)param_2 + (param_3 - 0x11));
      auVar3[0] = -(*pcVar1 == DAT_00183dd0);
      auVar3[1] = -(pcVar1[1] == UNK_00183dd1);
      auVar3[2] = -(pcVar1[2] == UNK_00183dd2);
      auVar3[3] = -(pcVar1[3] == UNK_00183dd3);
      auVar3[4] = -(pcVar1[4] == UNK_00183dd4);
      auVar3[5] = -(pcVar1[5] == UNK_00183dd5);
      auVar3[6] = -(pcVar1[6] == UNK_00183dd6);
      auVar3[7] = -(pcVar1[7] == UNK_00183dd7);
      auVar3[8] = -(pcVar1[8] == UNK_00183dd8);
      auVar3[9] = -(pcVar1[9] == UNK_00183dd9);
      auVar3[10] = -(pcVar1[10] == UNK_00183dda);
      auVar3[0xb] = -(pcVar1[0xb] == UNK_00183ddb);
      auVar3[0xc] = -(pcVar1[0xc] == UNK_00183ddc);
      auVar3[0xd] = -(pcVar1[0xd] == UNK_00183ddd);
      auVar3[0xe] = -(pcVar1[0xe] == UNK_00183dde);
      auVar3[0xf] = -(pcVar1[0xf] == UNK_00183ddf);
      auVar4[0] = -(*(char *)((longlong)param_2 + (param_3 - 1)) == DAT_00184770);
      auVar4[1] = -(UNK_00184771 == '\0');
      auVar4[2] = -(UNK_00184772 == '\0');
      auVar4[3] = -(UNK_00184773 == '\0');
      auVar4[4] = -(UNK_00184774 == '\0');
      auVar4[5] = -(UNK_00184775 == '\0');
      auVar4[6] = -(UNK_00184776 == '\0');
      auVar4[7] = -(UNK_00184777 == '\0');
      auVar4[8] = -(UNK_00184778 == '\0');
      auVar4[9] = -(UNK_00184779 == '\0');
      auVar4[10] = -(UNK_0018477a == '\0');
      auVar4[0xb] = -(UNK_0018477b == '\0');
      auVar4[0xc] = -(UNK_0018477c == '\0');
      auVar4[0xd] = -(UNK_0018477d == '\0');
      auVar4[0xe] = -(UNK_0018477e == '\0');
      auVar4[0xf] = -(UNK_0018477f == '\0');
      auVar4 = auVar4 & auVar3;
      if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) goto LAB_006281ce;
    }
  }
  if (*(longlong *)((longlong)param_2 + 3) != 0x2f736567616d692f || *param_2 != 0x67616d692f31762f)
  {
    if (*(short *)((longlong)param_2 + (param_3 - 2)) == 0x7365 &&
        *(longlong *)((longlong)param_2 + (param_3 - 10)) == 0x736e6f707365722f) {
LAB_006281f8:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 1;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      *param_1 = 3;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) != 0x2f736c65646f6d2f || *param_2 != 0x65646f6d2f31762f
       ) {
LAB_00628226:
      if (*(char *)((longlong)param_2 + (param_3 - 1)) != 's' ||
          *(longlong *)((longlong)param_2 + (param_3 - 9)) != 0x6567617373656d2f) {
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 != 0x2f31762f) {
        *param_1 = 0;
        return;
      }
      <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
      <http[56314f485c23ccf6]::header::value::HeaderValue>
                (&local_28,
                 "anthropic-versionworker_channel_closedexecution worker dropped turn response channel before completioncaller_disconnectedcaller disconnected"
                 ,0x11);
      if ((local_28 == '\0') &&
         (<&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
          <http[56314f485c23ccf6]::header::value::HeaderValue>(&local_28,"x-api-key",9),
         CONCAT71(uStack_27,local_28) == 0)) {
        uVar2 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 1;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined2 *)(param_1 + 1) = 0;
        uVar2 = 4;
      }
      *param_1 = uVar2;
      return;
    }
  }
LAB_006281ce:
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[1] = 0;
  *param_1 = 2;
  return;
}



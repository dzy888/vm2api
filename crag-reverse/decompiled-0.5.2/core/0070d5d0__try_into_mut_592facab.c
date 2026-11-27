// 0070d5d0 try_into_mut

/* <bytes[e9829e187354639b]::bytes::Bytes>::try_into_mut */

ulonglong * __rustcall
<bytes[e9829e187354639b]::bytes::Bytes>::try_into_mut(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  
  cVar4 = (**(code **)(*param_2 + 0x18))();
  if (cVar4 == '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    param_1[3] = param_2[2];
    param_1[4] = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2[2],param_2[1]);
  }
  *param_1 = (ulonglong)(cVar4 == '\0');
  return param_1;
}



// 0070e410 promotable_is_unique

/* bytes[e9829e187354639b]::bytes::promotable_is_unique */

bool __rustcall bytes[e9829e187354639b]::bytes::promotable_is_unique(ulonglong *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*param_1 & 1) == 0) {
    bVar1 = *(longlong *)(*param_1 + 0x10) == 1;
  }
  return bVar1;
}



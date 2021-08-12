// campfire_gang.ysc @ L14599
struct<5> func_372(int iParam0, char* sParam1)
{
  struct<5> Var0;
  int iVar5;
  var uVar6;

  Var0 = 3;
  Var0.f_4 = PATHFIND::_0x5A3B54ADDF5472A3(sParam1);
  if (Var0.f_4 > 3)
  {
    Var0.f_4 = 3;
  }
  iVar5 = 0;
  while (iVar5 < Var0.f_4)
  {
    uVar6 = PATHFIND::_0xA33914B00CA55756(sParam1, iVar5);
    Var0[iVar5] = uVar6;
    iVar5++;
  }
  return Var0;
}
// fmmc_launcher.ysc @ L350412
void func_5381(int iParam0, int iParam1)
{
  struct<3> Var0;
  float fVar3;
  bool bVar4;
  var uVar5;
  
  Var0 = { func_5366(iParam0) };
  fVar3 = (func_5365(iParam0) + 2f);
  bVar4 = false;
  uVar5 = func_5370(iParam0);
  Global_1311020[iParam1 /*2*/].f_1 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Var0, fVar3, 0f, bVar4);
  Global_1311020[iParam1 /*2*/] = uVar5;
}
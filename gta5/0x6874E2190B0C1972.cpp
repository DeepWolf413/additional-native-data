// fm_content_auto_shop_delivery.ysc @ L13422
int func_255(int iParam0)
{
  var uVar0;
  struct<3> Var1;
  struct<3> Var4;
  struct<3> Var7;
  float fVar10;
  
  if (func_257(iParam0, &Var1, &Var4, &fVar10, &uVar0))
  {
    if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var4, Var1, fVar10, &Var7))
    {
      if (func_256(iParam0, Var7, Var4, uVar0))
      {
        Local_1331.f_108 = { Var7 };
        Local_1331.f_117 = func_250(Var7, Var4);
        return 1;
      }
    }
  }
  return 0;
}
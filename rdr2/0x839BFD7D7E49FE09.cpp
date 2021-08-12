// bjack_sp.ysc @ L24918
void func_840(int iParam0)
{
  var uVar0;
  var uVar1;

  if (!HUD::IS_MP_GAMER_TAG_ACTIVE(Global_1058888.f_42784[iParam0 /*12*/].f_2))
  {
    Global_1058888.f_42784[iParam0 /*12*/].f_2 = uVar0;
    return;
  }
  func_1143(&(Global_1058888.f_42784[iParam0 /*12*/].f_10));
  func_1144(iParam0, 1277358601, 1);
  func_1145(iParam0, 0);
  HUD::REMOVE_MP_GAMER_TAG(&(Global_1058888.f_42784[iParam0 /*12*/].f_2));
  Global_1058888.f_42784[iParam0 /*12*/].f_2 = uVar1;
  Global_1058888.f_42784[iParam0 /*12*/].f_1 = 0;
  Global_1058888.f_42784[iParam0 /*12*/] = 0;
}
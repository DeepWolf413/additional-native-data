// fishing_core.ysc @ L14450
void func_555(var uParam0, int iParam1)
{
  if (func_263(Global_1900073.f_154[iParam1]))
  {
    if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_13))
    {
      STREAMING::REQUEST_MODEL((uParam0[iParam1 /*263*/])->f_18, false);
      if (STREAMING::HAS_MODEL_LOADED((uParam0[iParam1 /*263*/])->f_18) && ENTITY::DOES_ENTITY_EXIST(func_260(iParam1)))
      {
        (uParam0[iParam1 /*263*/])->f_13 = OBJECT::CREATE_OBJECT((uParam0[iParam1 /*263*/])->f_18, func_261(iParam1), false, false, false, false, true);
        ENTITY::SET_ENTITY_COLLISION((uParam0[iParam1 /*263*/])->f_13, false, false);
        ENTITY::SET_ENTITY_INVINCIBLE((uParam0[iParam1 /*263*/])->f_13, true);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iParam1 /*263*/])->f_18);
        func_444((uParam0[iParam1 /*263*/])->f_13);
      }
    }
    if (ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_13))
    {
      TASK::_0xCE71C2F9BAA3F975(func_53(uParam0, iParam1), (uParam0[iParam1 /*263*/])->f_13);
    }
  }
}
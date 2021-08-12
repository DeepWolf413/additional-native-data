// business_battles.ysc @ L99192
void func_606(var uParam0, struct<3> Param1, bool bParam4, var uParam5)
{
  if (!MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0))
  {
    *uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(Param1 - Vector(uParam5, uParam5, uParam5), Param1 + Vector(uParam5, uParam5, uParam5), 1f, 0.25f, bParam4, true);
  }
}
// coffee_drinking.ysc @ L312
float func_10(int iParam0, float fParam1)
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;

  switch (iParam0)
  {
    case 0:
      fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
      fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
      break;
    case 1:
      fVar0 = PED::_GET_PED_STAMINA(Global_35);
      fVar1 = PED::_GET_PED_MAX_STAMINA(Global_35);
      break;
    case 2:
      fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
      fVar1 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
      break;
  }
  fVar3 = (fParam1 + fVar0);
  if (fVar3 > fVar1)
  {
    fVar2 = (fVar1 - fVar0);
  }
  else
  {
    fVar2 = (fVar3 - fVar0);
  }
  return (fVar2 / 2f);
}
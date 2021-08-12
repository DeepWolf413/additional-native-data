// act_bankrobbery01.ysc @ L40203
bool func_1217(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
  float fVar0;
  float fVar1;
  bool bVar2;

  bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
  if (bVar2 == 0)
  {
    if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
    {
      return true;
    }
  }
  return false;
}
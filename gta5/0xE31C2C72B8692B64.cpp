// agency_heist1.ysc @ L108623
int func_645(float fParam0, float fParam1, float fParam2, float fParam3)
{
  float fVar0;
  float fVar1;
  
  fVar0 = (fParam3 - fParam2);
  fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_1011, false));
  if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1011) && fVar1 > fParam2)
  {
    fLocal_1198 = (fLocal_1198 + MISC::GET_FRAME_TIME());
  }
  else
  {
    fLocal_1198 = 0f;
  }
  if (fVar1 > fParam2 && fLocal_1198 > func_636(fParam0, fParam1, (1f - (func_646((fVar1 - fParam2), 0f, fVar0) / fVar0))))
  {
    return 1;
  }
  return 0;
}
// am_casino_peds.ysc @ L334146
void func_4704(var uParam0, float fParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < *uParam0)
  {
    if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], false))
    {
      PED::SET_PED_LOD_MULTIPLIER((*uParam0)[iVar0], fParam1);
    }
    iVar0++;
  }
}
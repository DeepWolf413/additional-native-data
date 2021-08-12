// fmmc_launcher.ysc @ L632313
void func_10538()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 4;
  iVar3 = func_7289(func_10540());
  if (iVar3 > 20 && iVar3 < 7)
  {
    iVar0 = 0;
    while (iVar0 < iVar1)
    {
      if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST(func_10539(iVar0), 0) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(func_10539(iVar0), 0)))
      {
        iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(func_10539(iVar0), 0));
        if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
        {
          VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, false);
          VEHICLE::SET_VEHICLE_LIGHTS(iVar2, 2);
        }
      }
      iVar0++;
    }
  }
}
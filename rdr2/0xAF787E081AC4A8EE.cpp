// train_fast_travel_core.ysc @ L1956
float func_66(int iParam0, vector3 vParam1, var uParam4)
{
  vector3 vVar0;
  int iVar3;
  var uVar4;
  float fVar5;

  fVar5 = 40f;
  if (!func_67(vParam1))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
    {
      iVar3 = VEHICLE::_0x1180A2974D251B7B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
      uVar4 = VEHICLE::_0xAF787E081AC4A8EE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
      if (iVar3 >= 0)
      {
        vVar0 = { VEHICLE::_0xBA958F68031DDBFC(uVar4, iVar3) };
        if (!func_67(vVar0))
        {
          *uParam4 = { func_106(vParam1, vVar0) };
          fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, true);
        }
      }
    }
  }
  if (fVar5 > 100f)
  {
    fVar5 = 100f;
  }
  return fVar5;
}
// marston1.ysc @ L53923
void func_1342(bool bParam0, float fParam1, float fParam2)
{
  float fVar0;

  if (func_832(*bParam0))
  {
    return;
  }
  fVar0 = ENTITY::GET_ENTITY_SPEED(*bParam0);
  if (fVar0 < fParam1)
  {
    return;
  }
  VEHICLE::_0x104D9A7B1C0D0783(*bParam0, fParam1);
  fParam2 = MISC::ABSF(fParam2);
  fParam2 = func_1749(fParam2, 0f, 100f);
  fParam2 = (fParam2 / 100f);
  fVar0 = func_1749((fVar0 - (fVar0 * fParam2)), fParam1, fVar0);
  if (fParam1 == 0f && fVar0 < 0.75f)
  {
    fVar0 = 0f;
  }
  if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(*bParam0)))
  {
    VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*bParam0, -fParam2);
  }
  else
  {
    VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(*bParam0, fVar0);
  }
}
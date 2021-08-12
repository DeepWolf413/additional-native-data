// ambient_fishing_scenario.ysc @ L429
void func_25(int iParam0)
{
  vector3 vVar0;
  float fVar3;
  vector3 vVar4;
  vector3 vVar7;
  float fVar10;
  float fVar11;
  vector3 vVar12;
  vector3 vVar15;

  if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(Local_5.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_5.f_6))
  {
    return;
  }
  vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_5.f_5, true, false) };
  fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
  vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 0f, 10f, 0f) };
  vVar7 = { func_26(vVar4 - vVar0) };
  fVar10 = 1f;
  fVar11 = 0f;
  func_27(&fVar10, &fVar11, 45f);
  vVar12 = { func_26(vVar7.x, vVar7.y, fVar11) };
  vVar15 = { vVar12 * FtoV((Local_5.f_12 * 5f)) };
  PHYSICS::SET_DAMPING(Local_5.f_5, 0, Local_5.f_16);
  PHYSICS::SET_DAMPING(Local_5.f_6, 0, Local_5.f_16);
  ENTITY::APPLY_FORCE_TO_ENTITY(Local_5.f_5, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
  ENTITY::APPLY_FORCE_TO_ENTITY(Local_5.f_6, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
  ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_5.f_5, true);
  ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_5.f_6, true);
}
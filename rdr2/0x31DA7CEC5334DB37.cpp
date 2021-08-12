// mob3.ysc @ L55027
void func_1321()
{
  vector3 vVar0;

  if (func_176(uLocal_211, 67108864))
  {
    return;
  }
  vLocal_1213 = { 2189.74f, -974.86f, 44.5f };
  vLocal_1219 = { 0f, 0f, 59.7833f };
  if (func_1826(vLocal_1210, vLocal_1213, 0.1f, 1))
  {
    func_456(&uLocal_211, 67108864);
    PHYSICS::ACTIVATE_PHYSICS(iLocal_1134[4]);
    vVar0 = { func_1827(vLocal_1210, vLocal_1213, 10f) };
    return;
  }
  vLocal_1210 = { ENTITY::GET_ENTITY_COORDS(iLocal_1134[4], false, false) };
  vLocal_1216 = { ENTITY::GET_ENTITY_ROTATION(iLocal_1134[4], 2) };
  vLocal_1210 = { func_1825(vLocal_1210, vLocal_1213, (BUILTIN::TIMESTEP() * 2.5f)) };
  vLocal_1216 = { func_1825(vLocal_1216, vLocal_1219, (BUILTIN::TIMESTEP() * 2.5f)) };
  ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1134[4], vLocal_1210, false, true, true);
  ENTITY::SET_ENTITY_ROTATION(iLocal_1134[4], vLocal_1216, 2, true);
  vVar0 = { func_1827(vLocal_1210, vLocal_1213, 50f) };
  vVar0 = { vVar0 * FtoV(BUILTIN::TIMESTEP()) };
  ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_1134[4], 0, vVar0, false, true, true, false);
}
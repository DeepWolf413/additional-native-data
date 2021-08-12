// beat_prison_wagon.ysc @ L4203
bool func_111()
{
  float fVar0;
  var uVar1;
  vector3 vVar4;
  vector3 vVar7;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_1505))
  {
    return true;
  }
  PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Local_654.f_51, &uVar1, &fVar0, 1, 3f, 0);
  vVar4 = { Global_36 - Local_654.f_51 };
  vVar4.f_2 = 0f;
  vVar4 = { func_275(vVar4) };
  vVar7 = { -BUILTIN::SIN(fVar0), BUILTIN::COS(fVar0), 0f };
  if (func_276(vVar4, vVar7) < 0f)
  {
    fVar0 = (fVar0 + 180f);
  }
  iLocal_1505 = func_277(iLocal_1507, Local_654.f_51, fVar0, 1, 1, 0);
  VEHICLE::_0xCBF88256E44D5D39(iLocal_1505, 1);
  ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1505, 1);
  VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1505, 0f);
  iLocal_1175 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), iLocal_1505, 0f, 30f, 30f, 0f, -1f, 180f, false, false, -1, -1);
  func_130(&Local_654, iLocal_1505);
  iLocal_1497 = VOLUME::_CREATE_VOLUME_CYLINDER(0f, 0f, 0f, 0f, 0f, 0f, 60f, 60f, 5f);
  PED::_0x7C00CFC48A782DC0(iLocal_1497, iLocal_1505, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
  POPULATION::_0xB56D41A694E42E86(iLocal_1497, 2232479, 0, 0, -1, -1, 6);
  return ENTITY::DOES_ENTITY_EXIST(iLocal_1505);
}
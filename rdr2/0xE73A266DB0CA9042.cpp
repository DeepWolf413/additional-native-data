// braithwaites2.ysc @ L55410
void func_1357()
{
  int iVar0;

  if (func_163(Local_14.f_8[2], 0))
  {
    func_1890(Local_14.f_8[2], 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
    PED::SET_PED_TARGET_LOSS_RESPONSE(Local_14.f_8[2], 1);
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_14.f_8[2], func_391(0, 12), 3f, 0, 0, 0);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_8[2], 0, false);
    PED::REGISTER_TARGET(Local_14.f_8[2], bLocal_785, 1);
    PED::SET_PED_ACCURACY(Local_14.f_8[2], 20);
    func_1300(Local_14.f_8[2], 1);
    func_169(&(iLocal_737[2]));
    iLocal_737[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_14.f_8[2]);
    MAP::_BLIP_SET_MODIFIER(iLocal_737[2], -1034486097);
    WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_8[2], WEAPON::GET_BEST_PED_WEAPON(Local_14.f_8[2], false, false), false, 0, false, false);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_CLEAR_LOOK_AT(0);
    TASK::TASK_PAUSE(0, 1000);
    TASK::TASK_LOOK_AT_COORD(0, 1840.05f, -1274.52f, 44.23f, 1000, 0, 51, 0);
    TASK::TASK_SHOOT_AT_ENTITY(0, bLocal_785, 2000, 0, 0);
    TASK::TASK_COMBAT_PED(0, bLocal_785, 0, 0);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(Local_14.f_8[2], iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  }
}
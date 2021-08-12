// beat_lost_friend.ysc @ L14454
void func_422()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_769[1]))
  {
    func_674(iLocal_358, &uLocal_778);
    func_675(iLocal_358, &(uLocal_778[6]));
    WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_769[1], true, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_769[1], 131, true);
    func_676(iLocal_769[1], 0);
    PED::SET_PED_CONFIG_FLAG(iLocal_769[1], 278, false);
    func_222(iLocal_769[1], 1, 1);
    func_677(iLocal_769[1], 0);
    PED::SET_PED_CONFIG_FLAG(iLocal_769[1], 223, true);
    PED::_0x6569F31A01B4C097(iLocal_769[1], 4, 0);
    ENTITY::_0x18FF3110CF47115D(iLocal_769[1], 7, 0);
    PED::_0x851966E1E35AF491(iLocal_769[1], 1);
    ENTITY::SET_ENTITY_VISIBLE(iLocal_769[1], false);
    func_678(&Local_737, iLocal_769[1], 0, 5000, 3, 1, 2, 1, 0, 0, 0, 0);
  }
}
// mob3.ysc @ L58515
void func_1443(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1134[0]))
  {
    iLocal_1134[0] = VEHICLE::_CREATE_MISSION_TRAIN(-1083616881, 2772.193f, -1363.887f, 46.2587f, false, false, true, false);
    VEHICLE::SET_TRAIN_SPEED(iLocal_1134[0], 0f);
    VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_1134[0], 0f);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1134[0], false);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_1134[0], 1, false);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_1134[0], 2, true);
    VEHICLE::_0xDD100CE1EBBF37E3(iLocal_1134[0], 0);
    VEHICLE::_0xA72B1BF3857B94D7(iLocal_1134[0], 1);
    VEHICLE::_0x1BFBAFCC6760FF02(iLocal_1134[0], 0);
    VEHICLE::_0x0794199B25E499E1(iLocal_1134[0], 0);
    VEHICLE::_0xAE7E66A61E7C17A5(iLocal_1134[0], 1);
    VEHICLE::_0xEF28A614B4B264B8(iLocal_1134[0], 1);
    func_435(uParam0, iLocal_1134[0], "trolley01x", 0, 0, 0, 0);
  }
}
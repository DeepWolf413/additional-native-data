// assassin_construction.ysc @ L18123
void func_357()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_1646[0 /*19*/]))
  {
    Local_1646[0 /*19*/] = PED::CREATE_PED(26, iLocal_1779[1], -111.9202f, -943.5192f, 28.2288f, 344.7112f, true, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1646[0 /*19*/], true, 1);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_1646[0 /*19*/], 50, true);
    PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_1646[0 /*19*/]);
    func_358(0);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(Local_1646[1 /*19*/]))
  {
    Local_1646[1 /*19*/] = PED::CREATE_PED(26, iLocal_1779[1], -197.8959f, -1078.97f, 20.6882f, 166.4473f, true, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1646[1 /*19*/], true, 1);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_1646[1 /*19*/], 50, true);
    PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_1646[1 /*19*/]);
    func_358(1);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(Local_1646[2 /*19*/]))
  {
    Local_1646[2 /*19*/] = PED::CREATE_PED(26, iLocal_1779[1], -82.0262f, -1023.124f, 27.3748f, 269.8311f, true, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1646[2 /*19*/], true, 1);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_1646[2 /*19*/], 50, true);
    PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_1646[2 /*19*/]);
    func_358(2);
  }
}
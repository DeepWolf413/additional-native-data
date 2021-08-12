// act_caunc_rustling.ysc @ L27016
int func_664(var uParam0, int iParam1, int iParam2)
{
  if (((((((((((((!((((((func_259(uParam0->f_2[iParam1], 1139527981) || func_259(uParam0->f_2[iParam1], 518218985)) || func_259(uParam0->f_2[iParam1], 242628503)) || func_259(uParam0->f_2[iParam1], 713668775)) || func_259(uParam0->f_2[iParam1], -1775383291)) || func_259(uParam0->f_2[iParam1], 1056466932)) || func_259(uParam0->f_2[iParam1], 993674639)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iParam1])) && !PED::IS_PED_FLEEING(uParam0->f_2[iParam1])) && !PED::_0x40C9155AF8BC13F3(uParam0->f_2[iParam1])) && !PED::_0x77525BBF433F2CD6(uParam0->f_2[iParam1])) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_ANIMAL_DETECTED_THREAT"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_ANIMAL_RESPONDED_TO_THREAT"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_ANIMAL_PROVOKED"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_SHOT_FIRED_WHIZZED_BY"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_SHOT_FIRED_WHIZZED_BY_ENTITY"))) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iParam1], 1)) && !(FLOCK::_0x8D913E493BAFE0A3(*uParam0) && FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iParam1]))) && !func_1147(uParam0, iParam1))
  {
    if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
    {
      TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iParam1], -1, iParam2, 1, 1);
    }
    else
    {
      TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iParam1], -1, 0, 1, 1);
    }
    return 1;
  }
  return 0;
}
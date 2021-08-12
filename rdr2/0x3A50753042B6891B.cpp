// es_clean_stalls.ysc @ L4366
void func_204(var uParam0, var uParam1)
{
  if ((ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam1, *uParam0))
  {
    ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
    PED::_0x89F5E7ADECCCB49C(*uParam0, "carry_pitchfork");
    PED::_0x2208438012482A1A(*uParam0, false, false);
    ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*uParam1, true);
  }
  PED::_0x3A50753042B6891B(*uParam0, "PITCH_FORKS");
}
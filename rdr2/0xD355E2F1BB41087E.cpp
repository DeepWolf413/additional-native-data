// rcm_pearson1.ysc @ L30085
void func_860(var uParam0, float fParam1)
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;

  if (!func_352(*uParam0, 0))
  {
    return;
  }
  fVar0 = (30f * fParam1);
  fVar1 = fVar0;
  fVar2 = 0.5f;
  fVar3 = (fVar0 * 0.2f);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 87, fVar0);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 104, fVar0);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 82, fVar0);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 91, fVar0);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 107, fVar0);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 85, fVar0);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 90, fVar1);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 106, fVar1);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 84, fVar1);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 89, fVar1);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 105, fVar1);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 83, fVar1);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 78, fVar1);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 98, fVar2);
  FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 99, fVar2);
  PED::_0xD355E2F1BB41087E(*uParam0, fVar3);
}
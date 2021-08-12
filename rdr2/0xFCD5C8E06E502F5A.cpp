// beat_horse_race.ysc @ L3143
void func_69()
{
  PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1772.75f, 362.62f, 113.6f, 40f, 15f, 10f, -9f, false, 7);
  iLocal_1016 = func_42();
  iLocal_1017 = func_43();
  switch (Local_15.f_51.f_4)
  {
    case 2:
    case 5:
    case 7:
      AUDIO::START_AUDIO_SCENE("Horse_Race_Beat_Train_scene");
      AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_411, "Horse_Race_Train_group", 0f);
      break;
  }
  func_67(1);
}
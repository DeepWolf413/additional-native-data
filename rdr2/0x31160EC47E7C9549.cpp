// beat_checkpoint.ysc @ L7386
void func_195()
{
  if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_810[0], joaat("RIDE_OFF")))
  {
    TASK::CLEAR_PED_TASKS(uLocal_810[0], true, false);
    ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_84, "CART", iLocal_807);
    TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_810[0], iLocal_807, 5f, 67633301);
    PHYSICS::_0x31160EC47E7C9549(iLocal_807, 1);
    bLocal_1278 = true;
    func_8(&uLocal_1190, 1);
    bLocal_1291 = true;
    func_237(&(Local_1086[1 /*17*/]), "RE_INTER_ANTAGONIZE");
  }
  if (!bLocal_1263)
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_810[0], 1793865656))
    {
      bLocal_1263 = true;
    }
  }
  else
  {
    func_406();
  }
}
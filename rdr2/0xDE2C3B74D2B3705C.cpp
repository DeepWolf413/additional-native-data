// beat_rally_dispute.ysc @ L428
void func_9()
{
  AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
  func_28(&uLocal_435, 1);
  func_28(&(uLocal_436[0]), 1);
  func_28(&(uLocal_436[1]), 1);
  func_28(&(uLocal_436[2]), 1);
  func_28(&(uLocal_436[3]), 1);
  func_29(&uLocal_441, &uLocal_442);
  if (!Local_32.f_48)
  {
    func_30();
    if (func_31(Global_35, Local_32.f_51, 1) > 80f)
    {
      func_32();
    }
    else
    {
      func_33(&uLocal_385, 1);
      func_34(&uLocal_385, 1);
      Local_32.f_50 = 1;
    }
  }
  else if (!func_35(joaat("DOCUMENT_NOTE_RALLY"), 1, 0))
  {
    MISC::_0xDE2C3B74D2B3705C(joaat("ARS_RALLY"), 300000);
  }
  func_36(&Local_32, &uLocal_385, &uLocal_390, 0, uLocal_451, uLocal_447, 0, 1, 0, 1);
  SCRIPTS::TERMINATE_THIS_THREAD();
}
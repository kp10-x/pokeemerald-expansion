TeleportMenu::
    lockall
    multichoicedefault 0, 0, MULTI_YESNO, 0, 1
    switch VAR_RESULT
    case 0 Teleport_Yes
    case 1 Teleport_No
    release
    end

Teleport_Yes::
    special SetCB2WhiteOut
    waitstate
    release
    end

Teleport_No::
    release
    end


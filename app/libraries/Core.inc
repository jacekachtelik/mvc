<?php

namespace app\libraries;

/**
 * @class Core
 * Tworzy URL i ładuje kontrolery.
 * Format URL: /controller/method/params
 * @author Jacek Achtelik <jacekachtelik@gmail.com>
 */
class Core {
    protected string $currentController = 'Pages';
    protected string $currentMethod = 'index';
    protected array $params = [];

    public function __construct()
    {
        $this->getUrl();
    }

    public function getUrl() {
        if (array_key_exists('url',$_GET)) {
            echo $_GET['url'];
        }
    }
}